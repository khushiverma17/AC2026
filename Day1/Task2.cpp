#include <iostream>
#include <vector>
using namespace std;
// Insertion Sort
int missingNumber(vector<int>& nums) {
    int i=0;
    while(i<nums.size())
    {
        // int correct=arr[i]-1;    //for range[1,n]
        int correct=nums[i];     //for range[0,n]
        if(nums[i]<nums.size() && nums[i]!=nums[correct])
        {
            swap(nums[i],nums[correct]);
        }
        else{
        i++;
        }
    }
    //After sorting
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=i)
        return i;
    }
    return nums.size();
    }

int main()
{
    vector<int> nums{4, 2, 0, 1, 3};
    int ans;
    ans = missingNumber(nums);
    cout << ans;

    return 0;
}

//TC=>O(n)
//SC=>O(1)