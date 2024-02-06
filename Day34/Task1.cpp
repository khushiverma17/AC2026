#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// first and last position

int firstOccurence(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (nums[m] > target)
        {
            e = m - 1;
        }
        else if (nums[m] < target)
        {
            s = m + 1;
        }
        else
        {
            ans = m;
            e = m - 1;
        }
    }
    return ans;
}

int lastOccurence(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (nums[m] > target)
        {
            e = m - 1;
        }
        else if (nums[m] < target)
        {
            s = m + 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int first = firstOccurence(nums, target);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurence(nums, target);
    return {first, last};
}

int main()
{
    vector<int> nums{5, 7, 7, 8, 8, 10};
    vector<int> ans;
    ans = searchRange(nums, 8);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}