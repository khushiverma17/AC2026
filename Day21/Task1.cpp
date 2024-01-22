#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/3sum-closest/
// 3 sum closest
int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;

        for(int i=0;i<nums.size();i++)
        {
            int s=i+1;
            int e=nums.size()-1;

            while(s<e)
            {
                int temp_sum=nums[i]+nums[s]+nums[e];
                if(temp_sum==target)
                {
                    return target;
                }
                else if(diff>abs(temp_sum-target))
                {
                    diff=abs(temp_sum-target);
                    ans=temp_sum;
                }

                if(temp_sum<target)
                {
                    s++;
                }
                else
                {
                    e--;
                }
            }
        }
        return ans;
    }

int main(){
    vector<int>nums{-1,2,1,-4};
    cout<<threeSumClosest(nums,1);
    return 0;
}