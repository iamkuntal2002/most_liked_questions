#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/3sum-with-multiplicity/
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int> mp;
        int count = 0;
        int mod = 1e9+7;
        for(int i =0;i<arr.size();i++){
            count = (count+mp[target-arr[i]])%mod;
            for(int j =0;j<i;j++) mp[arr[i]+arr[j]]++;
        }
        return count;
    }
};