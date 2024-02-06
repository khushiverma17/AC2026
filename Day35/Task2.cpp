#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/koko-eating-bananas/description/
// koko eating bananas

int neededHours(vector<int> &piles, int h, int m)
{
    int ans = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        ans += piles[i] / m;
        if (ans > h)
            return INT_MAX;
        if (piles[i] % m != 0)
        {
            ans += 1;
        }
    }
    return ans;
}

int minEatingSpeed(vector<int> &piles, int h)
{

    // koko will always complete the whole bananas in 1 speed to maxelement speed
    // but we have to find the minimum speed, maximum speed can be infinite but we are supposed to find the minimum speed

    // so we have a range where the answer would lie --> apply BINARY SEARCH

    int s = 1, e = *max_element(piles.begin(), piles.end());
    while (s <= e)
    {
        int m = (s + e) / 2;

        // check if the speed m is suitable for koko or not --> means it should take atmost h hours at that m speed to complete all the bananas

        int ansHours = neededHours(piles, h, m);
        if (ansHours > h)
        {
            // means that the speed is slow increase the speed
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return s;
}

int main()
{
    vector<int>nums{3,6,7,11};
    
    cout<<minEatingSpeed(nums,8);


    return 0;
}