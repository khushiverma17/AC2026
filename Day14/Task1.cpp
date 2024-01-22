#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/di-string-match/description/
// di string match
vector<int> diStringMatch(string str) {
        int n=str.size();
        vector<int>res;
        int s=0;
        int e=n;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='I')
            {
                res.push_back(s);
                s++;
            }
            else
            {
                res.push_back(e);
                e--;
            }
        }
        res.push_back(e);
        return res;
    }
int main()
{
    vector<int>ans;
    ans=diStringMatch("IDID");
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}