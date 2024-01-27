#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/max-consecutive-ones-iii/description/
// maximum consecutive onesIII
int longestOnes(vector<int>& nums, int k) {
        int len=0;
     int m=k;
     for(int i=0;i<nums.size();i++){
         int cnt=0;
         k=m;
         for(int j=i;j<nums.size();j++){
             if(nums[j]==1) cnt++;
            if(nums[j]==0)
            {
                k--;
                if(k!=-1)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
         }
         len=max(len,cnt);
     } 
     return len;
    }
int main(){
    vector<int>nums{1,1,1,0,0,0,1,1,1,1,0};
    cout<<longestOnes(nums,2);
    return 0;
}