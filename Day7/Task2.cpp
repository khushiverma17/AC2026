#include<iostream>
#include<string>
using namespace std;
// https://codeforces.com/contest/1873/problem/A
// short sort

bool isPossible(string s)
{
    if(s[0]=='a' || s[1]=='b' || s[2]=='c')
    return true;
    return false;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(isPossible(s))
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}