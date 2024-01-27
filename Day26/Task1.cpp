#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/description/
// divide players into teams of equal skill
long long dividePlayers(vector<int>& skill) {
        unordered_map<int,int>mp;

        //finding total sum
        int sum=accumulate(skill.begin(),skill.end(),0);

        int n=skill.size();

        int noofteams=n/2;

        long long ans=0;
        if(sum%noofteams!=0) return -1;
        int playersperteam=sum/noofteams;

        for(int i=0;i<n;i++)
        {
            if(mp.find(playersperteam-skill[i])!=mp.end())
            {
                ans+=(long long)(playersperteam-skill[i])*(long long)skill[i];
                mp[playersperteam-skill[i]]--;
                if(mp[playersperteam-skill[i]]==0)
                {
                    mp.erase(playersperteam-skill[i]);
                }
               
            }
            else
            mp[skill[i]]++;
        }
        if(mp.size()!=0) return -1;
        return ans;





    }
int main(){
    vector<int>skill{3,2,5,1,2,4};
    cout<<dividePlayers(skill);
    return 0;
}