#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/contains-duplicate-ii/description/
// contains duplicate
 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))
            {
                int diff=abs(mp[nums[i]]-i);
                if(diff<=k) return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
int main(){
    vector<int>nums{1,2,3,1};
    cout<<containsNearbyDuplicate(nums,3);
    return 0;
}