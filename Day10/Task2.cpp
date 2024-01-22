#include<iostream>
using namespace std;
// https://codeforces.com/problemset/problem/1758/B
// xor average
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //xor of any number odd number of times is the number itself and average would also be that number so take any no. lets take 1
        if(n%2==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        //xor of any number even number of times is 0 so 2^2^2^2==2+2+2+2/4=2 which is not true so we have to alter some values since 1^3=2 and so 2^2^2^2^1^3=2 and 2+2+2+2+1+3/6=2
        else
        {
            cout<<1<<" "<<3<<" ";
            for(int i=0;i<n-2;i++)
            {
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}