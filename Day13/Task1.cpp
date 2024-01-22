#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1672/A
// log chopping
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        //logic is to cut a log of length 5, 4 moves are required=> for log of size n, n-1 moves are required and on odd no of moves, e will win otherwise m will win
        //5 no of moves 4
        //4 1           e
        //3 1 1         m
        //2 1 1 1       e
        //1 1 1 1 1     m   m is the winner
        
        //to find no of moves
        int moves=0;
        for(int i=0;i<n;i++)
        {
            moves+=(arr[i]-1);
        }
        if(moves%2==1)
        {
            cout<<"errorgorn"<<endl;
        }
        else
        {
            cout<<"maomao90"<<endl;
        }
    }
    return 0;
}