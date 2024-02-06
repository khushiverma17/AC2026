#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-target-indices-after-sorting-array/description/
// find target indices after sorting array

int leftfunc(vector<int> nums,int target)
    {
        int s=0,e=nums.size()-1;
        int ans=-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target)
            {
                ans=m;
                e=m-1;

            }
            else if(nums[m]<target)
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }            
        }
        return ans;
    }

    int rightfunc(vector<int> nums,int target)
    {
        int s=0,e=nums.size()-1;
        int ans=-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target)
            {
                ans=m;
                s=m+1;
            }
            else if(nums[m]<target)
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }            
        }
        return ans;
    }
    
    

    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());

        int leftocc=leftfunc(nums,target);
        int rightocc=rightfunc(nums,target);
        vector<int>ans;
        if(leftocc==-1) return ans;

        for(int i=leftocc;i<=rightocc;i++)
        {
            ans.push_back(i);
        }
        return ans;


    }

int main(){
    vector<int>ans, nums{1,2,3,4,4,4,4,5,5};
    ans=targetIndices(nums,4);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}