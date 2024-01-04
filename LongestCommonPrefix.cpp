#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";

        //for traversing each character of first string
        for(int i=0;i<strs[0].size();i++)
        {
            char ch=strs[0][i];
            //for traversing each string in the array
            for(int j=1;j<strs.size();j++)
            {
                if(ch!=strs[j][i])
                {
                    return ans;
                }
            }
            ans+=ch;

        }
        return ans;
    }
/*
TC=O(strs[0].size()*strs.size())
SC=O(1)
*/


int main(){
    
    vector<string> strs{"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);





    return 0;
}