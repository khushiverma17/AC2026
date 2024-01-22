#include<bits/stdc++.h>
using namespace std;
//Quick Sort
// https://codeforces.com/problemset/problem/1768/B

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        //since we have to insert the element at last then find 1 then 2 then 3 and so on and the elements which appear in middle during this process should be fetched to the last


        int count=0;
        int num=1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==num)
            {
                num++;
            }
            else
            {
                count++;
            }
        }
        cout<<(count+k-1)/k<<endl;


    }
    return 0;
}