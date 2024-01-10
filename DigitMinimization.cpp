#include<bits/stdc++.h>
using namespace std;

int smallest(int num)
{
    
    if((num/100)==0 && (num/10)!=0)
    {
        int temp=num;
        int unitdigit=temp%10;
        temp=temp/10;
        int tensdigit=temp%10;
        if(unitdigit>tensdigit)
        {
            return unitdigit;
        }
        else
        {
            return tensdigit;
        }
        
    }
    
    
    int mindig=INT_MAX;
    while(num!=0)
    {
        int dig=num%10;
        mindig=min(dig,mindig);
        num=num/10;
    }
    return mindig;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        cout<<smallest(num)<<endl;
    }
}