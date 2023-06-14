#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/wiggle-sort-ii/

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp(n,0);
        int pos = n-1;
        for(int i =1;i<n;i+=2){
            temp[i] = nums[pos];
            pos--;
        }
        for(int i =0;i<n;i+=2){
            temp[i] = nums[pos];
            pos--;
        }
        nums = temp;
    }
};

// 1 1 1 4 5 6
// 1 6 1 5 1 4