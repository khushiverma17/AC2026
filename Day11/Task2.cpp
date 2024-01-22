#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/1703/C
// cypher
int originalval(int x,pair<int,string>p)
{
    int value=x;
    for(int i=0;i<p.first;i++)
    {
        char c=p.second[i];
        if(c=='U')
        {
            if(value==0)
            {
                value=9;
                continue;
            }
            value--;
        }
        else
        {
            if(value==9)
            {
                value=0;
                continue;
            }
            value++;
        }
    }
    return value;
}

vector<int> func(vector<int>arr,vector<pair<int,string>>vec)
{
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    {
        int temp;
        temp=originalval(arr[i],vec[i]);
        ans.push_back(temp);
    }
    return ans;
}
// tc=m*n*t
// sc=space of vector of pair


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //input array
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            arr.push_back(num);
        }
        //make a vector of pairs, each pair will store int and string
        vector<pair<int,string>>vec;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            string dir;
            cin>>dir;
            //push a pair in the vector
            vec.push_back(make_pair(x,dir));
        }
        vector<int>ans;
        
         ans=func(arr,vec);
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}