#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/single-element-in-a-sorted-array/description/
// single element in sorted array

int singleNonDuplicate(vector<int> &nums)
{
    // Logic: 1  1   3   3   4   4   6   8   8   9   9
    //        0  1   2   3   4   5   6   7   8   9   10
    //  pair is at indexes (even,odd)
    if (nums.size() == 1)
        return nums[0];

    // when the mid is at begin or end of vector then nums[m-1] || nums[m+1] throw the segmentation error so we have eliminated the begin and end
    int s = 1, e = nums.size() - 2;

    // check if the element at begin is single or not
    if (nums[0] != nums[1])
        return nums[0];
    else if (nums[nums.size() - 1] != nums[nums.size() - 2])
        return nums[nums.size() - 1];
    while (s <= e)
    {
        int m = (s + e) / 2;
        // check if the neighbouring element is not equal to the mid element
        if (nums[m - 1] != nums[m] && nums[m] != nums[m + 1])
        {
            return nums[m];
        }
        // if mid element is equal to element at left
        if (nums[m] == nums[m - 1])
        {
            // check if mid is at odd index
            if (m % 2 == 1)
            {
                // then search in right half
                s = m + 1;
            }
            // if mid is at even index
            else
            {
                // search in left half
                e = m - 1;
            }
        }
        // if mid is equal to element at right
        else
        {
            // check if mid is at even index
            if (m % 2 == 0)
            {
                // search in right part
                s = m + 1;
            }
            // if mid is at odd index
            else
            {
                // search in left part
                e = m - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int>nums{1,1,2,3,3,4,4,8,8};
    cout<<singleNonDuplicate(nums);

    return 0;
}