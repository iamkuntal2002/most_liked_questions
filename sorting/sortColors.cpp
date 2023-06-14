#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sort-colors/description/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //DNF sorting
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
           else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};