#include<bits/stdc++.h>
using namespace std;


//logic is : there should be atleast 2 diff elements so that we can swap them and make a new palindromic string

bool check(string s)
{
    int m=s.size()/2;
    map<char,int>mp;
    for(auto value:s)
    {
        mp[value]++;
    }
    if(mp.size()==2)
    {
        for(auto value: mp)
        {
            if(value.second==1) return false;
        }
    }
    else if(mp.size()==1) return false;
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }

    }
}
 