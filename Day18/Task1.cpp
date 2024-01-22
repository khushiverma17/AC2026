#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-the-k-beauty-of-a-number/description/
// k beauty of a number
 int divisorSubstrings(int num, int k) {
        int i=0,j=0;
        int ans=0;  
        string n=to_string(num);
        while(j<n.size())
        {
            if(j-i+1==k)
            {
                string temp=n.substr(i,k);
                int tocheck=stoi(temp);
                if(tocheck!=0 && num%tocheck==0)
                {
                    ans++;
                }
                i++;
            }
            j++;
        }
        return ans;
    }

int main(){
    cout<<divisorSubstrings(240,2);
    return 0;
}