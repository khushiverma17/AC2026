#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sort-array-by-parity-ii/description/
// sort array by parity 2
vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;

        while(i<n && j<n)
        {
            if(nums[i]%2==0)
            {
                i+=2;
            }
            else if(nums[j]%2==1)
            {
                j+=2;
            }
            else
            {
                swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
int main(){
    vector<int>nums{4,2,5,7};
    vector<int>ans;
    ans=sortArrayByParityII(nums);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}