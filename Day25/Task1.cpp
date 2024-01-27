#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sort-colors/description/
// sort colors
void sortColors(vector<int>& nums) {
        int count1=0,count2=0,count3=0;
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]==0)
           {
               count1++;
           }
           else if(nums[i]==1)
           {
               count2++;
           }
           else
           {
               count3++;
           }
       }
        for(int i=0;i<count1;i++)
        {
            nums[i]=0;
        }
        for(int i=count1;i<count1+count2;i++)
        {
            nums[i]=1;
        }
        for(int i=count1+count2;i<count1+count2+count3;i++)
        {
            nums[i]=2;
        }
    }

int main(){
    vector<int>nums{2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}