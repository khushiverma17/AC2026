#include<iostream>
#include<string>
using namespace std;

int differ(string s,string comp)
{
    int i=0;
    int count=0;
    while(i<s.size())
    {
        if(s[i]!=comp[i])
        {
            count++;
        }
        i++;
    }
    return count;
}


int main(){
     int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        cout<<differ(s,"codeforces")<<endl;
    }



    return 0;
}