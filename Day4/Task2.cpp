#include<bits/stdc++.h>
using namespace std;
/*
s=abcde
goal=cdeab
If goal + goal contains s then true else false
*/

// https://leetcode.com/problems/rotate-string/
// rotate string
bool rotateString(string s, string goal) {
        
        if(s.size()!=goal.size()) return false;

        goal=goal+goal;

        if(goal.find(s)<goal.size())
        {
            return true;
        }
        return false;
    }

/*
TC=O(s.size()+goal.size()*2)
SC=O(goal.size())
*/
int main(){
    string s="abcde";
    string goal="cdeab";
    cout<<rotateString(s,goal);
    return 0;
}