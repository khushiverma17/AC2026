#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1811/problem/A
// insert digit

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        int flag=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-48<d && flag==-1)
            {
                flag=1;
                cout<<d;
            }
            cout<<s[i];
        }
        if(flag==-1)
        {
            cout<<d<<endl;
        }
        else
        cout<<endl;
    }
    return 0;
}