#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start = 0, end =0, k = 1, ans = 0;
        while(end<nums.size()){
            if(nums[end++] == 0) k--;
            if(k<0){
                if(nums[start++] == 0) k++;
            }
            ans = max(ans,end-start-1); //-1 because we delete on position
        }
        return ans;
    }
};