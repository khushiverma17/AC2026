#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/118/A
// string task
bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='y' ||c=='Y' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        return true;
    }
    return false;
}
bool isUpper(char c)
{
    if(c>=65 && c<=90)
    {
        return true;
    }
    return false;
}


int main(){
    string s;
    cin>>s;
    string ans;
    for(auto &value: s)
    {
        if(!isVowel(value))
        {
            if(isUpper(value))
            {
                value=(char)tolower(value);
            }
            ans=ans+"."+value;            
        }

    }
    cout<<ans<<endl;

    return 0;
}