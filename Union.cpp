#include<bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

// Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.


// Store all the elements of both given sets in a set, since set store unique value, so return the size of set


int doUnion(int a[], int n, int b[], int m)  {
      set<int>st;
      int i=0,j=0;
        while(i<n && j<m)
        {
            st.insert(a[i]);
            st.insert(b[j]);
            i++;
            j++;
        }
        while(i<n)
        {
            st.insert(a[i]);
            i++;
        }
        while(j<m)
        {
            st.insert(b[j]);
            j++;
        }
        return st.size();   
    }

    // TC=O(m or n)
    // SC=O(st.size())


int main(){
    int a[4]={1,2,3,4};
    int b[5]={2,4,6,7,7};
    int n=4;
    int m=5;
    int ans;
    ans=doUnion(a,n,b,m);
    cout<<ans;
    return 0;
}