#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/
// count number of pairs with absolute difference k
int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(abs(nums[i]-nums[j])==k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
int main(){
    vector<int>nums{1,2,2,1};
    cout<<countKDifference(nums,1);
    return 0;
}