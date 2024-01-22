#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/two-sum/description/
// two sum
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sortedNums=nums;
        sort(sortedNums.begin(),sortedNums.end());
        int left=0;
        int right=sortedNums.size()-1;
        while(left<=right)
        {
            int sum=sortedNums[left]+sortedNums[right];
            if(sum==target)
            {
                break;
            }
            else if(sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==sortedNums[left] || nums[i]==sortedNums[right])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
int main()
{
    vector<int>ans;
    vector<int>nums{2,7,11,15};
    ans=twoSum(nums,9);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}