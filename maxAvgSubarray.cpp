#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int mxsum =INT_MIN;
        for(int i =0;i<k;i++) sum += nums[i];
        if(k>=nums.size()) return sum*1.0/k;
        for(int i =k;i<nums.size();i++){
            mxsum = max(mxsum,sum);
            sum+= nums[i] - nums[i-k];
        }
        mxsum = max(mxsum,sum);
        return double(mxsum*1.0/k);
    }
};