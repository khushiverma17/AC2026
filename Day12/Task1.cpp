#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1822/problem/B
// karina ans array


int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long data1= (long long)arr[0]*(long long)arr[1];
        long long data2= (long long)arr[n-1]*(long long)arr[n-2];
        cout<<max(data1,data2)<<endl;
    }




    return 0;
}