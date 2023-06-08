#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/insert-interval/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(auto &v : intervals){
            if(res.back()[1] >= v[0]) res.back()[1] = max(v[1],res.back()[1]);
            else res.push_back(v);
        }
        return res;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        return merge(intervals);
    }
};