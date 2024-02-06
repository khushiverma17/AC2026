#include<iostream>
using namespace std;
// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// number of occurence

int leftstart(int arr[],int n,int x)
    {
        int s=0,e=n-1;
        int ans=-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(arr[m]<x)
            {
                s=m+1;
            }
            else if(arr[m]==x)
            {
                ans=m;
                e=m-1;
            }
            else
            {
                e=m-1;
            }
        }
        return ans;
    }
    
    int rightend(int arr[],int n,int x)
    {
        int s=0,e=n-1;
        int ans=-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(arr[m]>x)
            {
                e=m-1;
            }
            else if(arr[m]==x)
            {
                ans=m;
                s=m+1;
            }
            else
            {
                s=m+1;
            }
        }
        return ans;
    }
	
	int count(int arr[], int n, int x) {
	    if(rightend(arr,n,x)==-1) return 0;
	    return rightend(arr,n,x)-leftstart(arr,n,x)+1;
	}

int main(){
    int arr[9]={1,2,3,3,4,4,4,4,5};
    cout<<count(arr,9,4);
    return 0;
}