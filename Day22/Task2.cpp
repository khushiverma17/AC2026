#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/?envType=list&envId=rrssge1g
// longest substring without repeating characters
int lengthOfLongestSubstring(string s) {
        int start=0,end=0;
        set<char>Set;
        int maxlen=0;

        while(start<s.size())
        {
            auto it=Set.find(s[start]);
            if(it==Set.end())   //element is not already present in the set
            {
                maxlen=max(maxlen,start-end+1);
                Set.insert(s[start]);
                start++;
            }
            else    //element is already present in the set
            {
                Set.erase(s[end]);
                end++;
            }
        }
        return maxlen;



    }
int main(){
    cout<<lengthOfLongestSubstring("abcabcbb");
    return 0;
}