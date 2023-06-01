#include<bits/stdc++.h>
using namespace std;
// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
int helper(vector<int> &dp,int ind,vector<int> &nums){
        if(ind >= nums.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        int take = nums[ind] + helper(dp,ind+2,nums);
        int not_take = helper(dp,ind+1,nums);
        return dp[ind] = max(take,not_take);
    }
    int rob(vector<int>& nums) {
       vector<int> dp(nums.size()+1,-1);
       return helper(dp,0,nums);
    }