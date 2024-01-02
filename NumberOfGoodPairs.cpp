#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-good-pairs/description/

// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.


/*
logic is when we are on an element and if this element has already occured before then only 1 pair is possible
In case it has occured twice in the past then 2 new pairs are possible...and so on

*/

int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(auto value:nums)
        {
            ans=ans+mp[value];
            mp[value]++;
        }
        return ans;
    }

    // TC=O(n)
    // SC=O(mp.size())


int main(){
    
    return 0;
}