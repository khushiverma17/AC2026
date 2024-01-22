#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/remove-outermost-parentheses/
// remove outer parenthesis
bool isMatching(char a,char b)
    {
        if(a=='(' && b==')')
        return true;
        return false;
    }
    bool isOpen(char a)
    {
        if(a=='(')
        return true;
        return false;
    }
    bool isClose(char a)
    {
        if(a==')')
        return true;
        return false;
    }
    
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";

        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(st.empty())
            {
                st.push(ch);
            }
            else
            {
                if(isMatching(st.top(),ch))
                {
                    st.pop();
                    if(!st.empty())
                    {
                        ans=ans+ch;
                    }
                }
                else
                {
                    st.push(ch);
                    ans=ans+ch;
                }
                
            }

        }
        return ans;

    }
int main(){
    string ans;
    ans=removeOuterParentheses("(()())(())");
    cout<<ans;


    return 0;
}