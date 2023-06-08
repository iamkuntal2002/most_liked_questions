#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/search-in-rotated-sorted-array/
int search(vector<int>& nums, int n, int target)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(nums[mid] == target) return mid;
        if(nums[low] <= nums[mid]){
            if(target >= nums[low] && target <= nums[mid])
                high = mid -1;
            else low = mid +1;
        }
        else{
            if(target <= nums[high] && target >= nums[mid])
                low = mid +1;
            else high = mid -1;
        }
    }
    return -1;
}