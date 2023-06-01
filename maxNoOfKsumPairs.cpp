#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //S.C. O(n) + T.C. O(n)
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count =0;
        for(int i =0;i<nums.size();i++){
            if(mp[k-nums[i]]>0){
                count++;
                mp[k-nums[i]]--;
            }
            else mp[nums[i]]++;
        }
        return count;
    }
    //S.C. O(1) + T.C. O(n)
    int maxOperations(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size()-1;
        int currsum =0;
        int count =0;
        sort(nums.begin(),nums.end());
        while(start < end){
            currsum = nums[start] + nums[end];
            if(currsum == k){
                start++;
                end--;
                count++;
            }
            else if(currsum >k) end--;
            else start++;
        }
        return count;
    }
};