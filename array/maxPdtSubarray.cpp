#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-product-subarray/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int currpdt = 1;
        for(int i =0;i<nums.size();i++){
            currpdt *= nums[i];
            ans = max(ans,currpdt);
            if(currpdt == 0) currpdt =1;
        }
        currpdt = 1;
        for(int i = nums.size()-1;i>=0;i--){
            currpdt *= nums[i];
            ans = max(ans,currpdt);
            if(currpdt == 0) currpdt = 1;
        }
        return ans;
    }
};