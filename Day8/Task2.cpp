// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
// minimum time to make rope colorful
#include<bits/stdc++.h>
using namespace std;
int minCost(string s, vector<int>& cost) {
        int res=0,max_cost=0,sum_cost=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && s[i]!=s[i-1])
            {
                res+=sum_cost-max_cost;
                sum_cost=max_cost=0;
            }
            sum_cost+=cost[i];
            max_cost=max(max_cost,cost[i]);
        }
        res+=sum_cost-max_cost;
        return res;
    }
int main()
{
    vector<int>time{1,2,3,4,5};
    cout<<minCost("abaac",time);
}