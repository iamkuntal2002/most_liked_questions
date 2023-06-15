#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/delete-and-earn/
class Solution {
public:
    int helper(vector<int>&nums,vector<int> &dp,int ind){
        if(ind>=nums.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        int currval = nums[ind];
        int currsum = nums[ind];
        int currind = ind+1;
        while(currind<nums.size() && nums[currind] == currval){
            currsum += nums[ind];
            currind++;
        }
        while(currind<nums.size() && nums[currind] == currval+1){
            currind++;
        }
        //take all the currelement or skip the currelement
        return dp[ind] = max(currsum+helper(nums,dp,currind),helper(nums,dp,ind+1));
    }
    int deleteAndEarn(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        sort(nums.begin(),nums.end());
        return helper(nums,dp,0);
    }
};