#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/house-robber-ii/
int helper(vector<int> &dp,int ind,vector<int> &nums){
        if(ind >= nums.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        int take = nums[ind] + helper(dp,ind+2,nums);
        int not_take = helper(dp,ind+1,nums);
        return dp[ind] = max(take,not_take);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0],nums[1]);
        vector<int> first(nums.begin(),nums.end()-1);  
        vector<int> second(nums.begin()+1,nums.end());
        vector<int> dp(nums.size(),-1);
        int f = helper(dp,0,first);
        dp.clear();
        dp = vector<int> (nums.size(),-1);
        int s = helper(dp,0,second);
        return max(f,s);
    }