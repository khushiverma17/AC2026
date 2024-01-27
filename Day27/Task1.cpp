#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/subarray-sum-equals-k/description/
// subarray sum equals k
int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;

        int count=0;
        int sum=0;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if (mp.find(sum-k)!=mp.end())
            {
                count+=mp[sum-k];
            }
            mp[sum]++;
        }
        return count;

    }
int main(){
    vector<int>nums{1,2,3};
    cout<<subarraySum(nums,3);
    return 0;
}