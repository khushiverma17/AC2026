#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/
// minimise max pair sum
int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minMaxSum=0;
        int i=0,j=nums.size()-1;
        while(i<j)
        {
            minMaxSum=max(minMaxSum,nums[i]+nums[j]);
            i++;
            j--;
        }
        return minMaxSum;
    }
int main()
{
    vector<int>nums{3,5,2,3};
    cout<<minPairSum(nums);
}