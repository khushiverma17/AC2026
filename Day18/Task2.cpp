#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximize-the-confusion-of-an-exam/description/
// maximise confusion of exam
 int maxConsecutiveAnswers(string a, int k) {
        //let me change the F
        //ignore atmost k F in the way of T

        int i=0,j=0;
        int limit=0;
        int ans=0;


        while(j<a.size())
        {
            if(a[j]=='F')
            {
                limit++;
                while(limit>k)
                {
                    i++;
                    if(a[i-1]=='F')
                    {
                        limit--;
                    }
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }

        i=0,j=0;
        limit=0;


        while(j<a.size())
        {
            if(a[j]=='T')
            {
                limit++;
                while(limit>k)
                {
                    i++;
                    if(a[i-1]=='T')
                    {
                        limit--;
                    }
                }
            }
            ans=max(ans,j-i+1);
            j++;
        }


        return ans;


    }
int main(){
    cout<<maxConsecutiveAnswers("TTFF",2);
    return 0;
}