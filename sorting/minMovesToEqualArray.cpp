#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans =0;
        int n = nums.size();
        int mid = nums[n/2];
        for(int i =0;i<n;i++){
            if(i == n/2) continue;
            else{
                ans += abs(nums[i] - mid);
            }
        }
        return ans;
    }
};