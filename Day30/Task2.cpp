#include<bits/stdc++.h>
using namespace std;


// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
// search in rotated sorted array

int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==target) return mid;
            else if(nums[s]<=nums[mid])//means that left of mid is sorted
            {
                //check if the target can lie in this sorted part or not
                if(nums[s]<=target && target<=nums[mid])
                {
                    e=mid-1;
                }
                //then target should lie in right half
                else
                {
                    s=mid+1;
                }
            }
            //if the left is not sorted then right will definitely be sorted
            else
            {
                //check if the target lie in right sorted part or not
                if(nums[mid]<=target && target<=nums[e])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
        }
        return -1;
    }

int main(){
    vector<int>nums{4,5,6,7,8,9,1,2,3};
    cout<<search(nums,5);
    return 0;
}