#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/binary-search/description/
// binary search
int BS(vector<int>nums,int target,int s,int e)
    {
        int m=s-(s+e)/2;
        if(s>e) return -1;
        if(nums[m]==target)
        {
            return m;
        }
        else if(nums[m]>target)
        {
            return BS(nums,target,s,m-1);
        }
        else
        {
            return BS(nums,target,m+1,e);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]>target)
            {
                e=m-1;
            }
            else if(nums[m]<target)
            {
                s=m+1;
            }
            else
            {
                return m;
            }
        }
        return -1;


        //RECURSIVE APPROACH

        // int s=0,e=nums.size()-1;
        // return BS(nums,target,s,e);        
    }

int main(){
    vector<int> nums{4,5,7,9,12,345};
    cout<<search(nums,7);
    return 0;
}