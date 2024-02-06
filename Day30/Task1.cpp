#include<iostream>
using namespace std;
// https://leetcode.com/problems/arranging-coins/description/
// arranging coins

 int arrangeCoins(int n) {
        long long start=1,end=n;    //start and end should be long long
        while(start<=end)
        {
            long long m=start+(end-start)/2;    //mid should also be long long
            if((m*(m+1))/2==n)
            {
                return m;
            }
            else if((m*(m+1)/2)<n)
            {
                start=m+1;
            }
            else
            {
                end=m-1;
            }
        }
        return (int)end;    //return the int value of end
        
    }

int main(){
    cout<<arrangeCoins(9);
    return 0;
}