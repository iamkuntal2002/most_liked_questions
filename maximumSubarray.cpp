#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res =INT_MIN;
        int currsum =0;
        for(int i =0;i<nums.size();i++){
            currsum += nums[i];
            res = max(res,currsum);
            if(currsum <0) currsum =0;
        }
        return res;
    }
};