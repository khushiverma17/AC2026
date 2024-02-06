#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
// min in rotated sorted array

 int findMin(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int ans=INT_MAX;
        while(s<=e)
        {
            int m=(s+e)/2;

            //optional
            //if array is sorted
            if(nums[s]<=nums[e])
            {
                ans=min(ans,nums[s]);
                break;
            }

            //check if the left is sorted or not
            if(nums[s]<=nums[m])
            {
                //then min element may be at right
                //but it may be at left so take the min of left as the ans
                ans=min(ans,nums[s]);
                //now eliminate the left half simply
                s=m+1;
            }
            //if right is sorted
            else
            {
                //then min may lie on left half
                //but take min element of right half
                ans=min(ans,nums[m]);
                //eliminate the right part
                e=m-1;
            }
        }
        return ans;
    }

int main(){
    vector<int>v{3,4,5,1,2};
    cout<<findMin(v);
    
    return 0;
}