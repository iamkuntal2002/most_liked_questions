#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/rotate-array/
void reverse(vector<int> &nums,int i,int j){
        int left = i,right = j;
        while(left<right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(k == 0) return;
        k = k%nums.size();
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);
    }

    // 1 2 3 4 5 6 7, k = 3
    // first reverser -> 4 3 2 1 5 6 7
    // second reverse -> 4 3 2 1 7 6 5
    // third reverse -> 5 6 7 1 2 3 4