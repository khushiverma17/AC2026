#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/majority-element/
// Majority Element
int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        
    }
int main(){
    
    vector<int>nums{1,1,3,4,1,1,11,1,1};
    cout<<majorityElement(nums);

    return 0;
}