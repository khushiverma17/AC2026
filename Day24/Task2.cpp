#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/fruit-into-baskets/description/
// fruits into baskets

int totalFruit(vector<int>& fruits) {
        int i=0;
        int ans=0;
        unordered_map<int,int>basket;
        for(int j=0;j<fruits.size();j++)
        {
            basket[fruits[j]]++;
            while(basket.size()>2)
            {
                basket[fruits[i]]--;
                if(basket[fruits[i]]==0)
                {
                    basket.erase(fruits[i]);
                }
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;



    }


int main(){
    vector<int>fruits{1,2,3,2,2};
    cout<<totalFruit(fruits);
    return 0;
}