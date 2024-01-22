#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sort-array-by-parity/description/

// sort array by parity
vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j)
        {
        if(nums[i]%2==1 && nums[j]%2==0)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        else if(nums[i]%2==0)
        {
            i++;
        }
        else
        {
            j--;
        }
        }
        return nums;
        
    }
int main()
{
    vector<int>nums{3,1,2,4};
    vector<int>ans;
    ans=sortArrayByParity(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}