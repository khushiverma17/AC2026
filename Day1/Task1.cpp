#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/second-largest3735/1
// Given an array Arr of size N, print second largest distinct element from an array.

//    {8  7   9   7   5   4}

// sl  l

//  we are dealing with indices
// two pointer approach

int print2largest(int arr[], int n)
{
    int lar = 0;
    int seclar = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[lar])
        {
            seclar = lar;
            lar = i;
        }
        else if (arr[i] < arr[lar])
        {
            //{6    6   6   6   6   4} for seclar==-1

            //{6    4   3   0} for arr[i]>arr[seclar]

            if (seclar == -1 || arr[i] > arr[seclar])
            {
                seclar = i;
            }
        }
    }
    if (seclar == -1)
        return -1; // handles the case {6   6   6   6}
    return arr[seclar];
}

// TC = >O(n)
// SC=>O(1)

// int print2largest(int arr[],int n)
// {
//     //finding largest
//     int large=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>large)
//         {
//             large=arr[i];
//         }
//     }
//     int seclar=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=arr[large])
//         {
//             if(seclar==-1)
//             {
//                 seclar=i;
//             }
//             else if(arr[i]>arr[seclar])
//             {
//                 seclar=i;
//             }
//         }
//         return arr[seclar];
//     }
// }

// TC=>O(N)
// SC=>O(1)

int main()
{
    int nums[6] = {6,4,5,67,2,4};
    int n = 6;
    int ans = print2largest(nums, 6);
    cout << ans;
    return 0;
}
