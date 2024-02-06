#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
// min no of days to make m bouquets

bool isPossible(vector<int> &bloomDay, int m, int k, int mid)
{
    int count = 0;
    int noofB = 0;

    for (auto value : bloomDay)
    {
        if (value <= mid)
        {
            count++;
        }
        else
        {
            noofB += (count / k);
            count = 0;
        }
    }
    noofB += (count / k);
    if (noofB >= m)
    {
        return true;
    }
    return false;
}

int minDays(vector<int> &bloomDay, int m, int k)
{

    // here range of answer is from 1 to maxelement of bloomDay
    // range of answer-->apply BINARY SEARCH
    long long val = m * 1ll * k * 1ll;

    if (val > (long long)bloomDay.size())
    {
        return -1;
    }

    // ans will lie in range of min and max element of array

    int s = *min_element(bloomDay.begin(), bloomDay.end());
    int e = *max_element(bloomDay.begin(), bloomDay.end());

    // apply bs

    while (s <= e)
    {
        // int mid=(s+e)/2;
        int mid = s + (e - s) / 2;

        if (isPossible(bloomDay, m, k, mid))
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

int main()
{
    vector<int>nums{1,10,3,10,2};
    cout<<minDays(nums,3,1);


    return 0;
}