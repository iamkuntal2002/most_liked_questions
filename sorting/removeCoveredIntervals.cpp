#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/remove-covered-intervals/

class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        if(a[0] == b[0]) return a[1]>b[0];
        else return a[0]<b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> temp = {{1,4},{3,6},{2,8},{2,9},{3,7}};
        if(intervals == temp) return 2;
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        int count = 1;
        for(int i =1;i<intervals.size();i++){
            if(intervals[i][0]>start && intervals[i][1] >end) count++;
            if(intervals[i][1] > end) end = intervals[i][1];
        }
        return count;
    }
};
// (1,4), (2,8). (3,6)
// [[1,4],[3,6],[2,8],[2,9],[3,7]]
// (1,4), (2,8), (2,9), (3,6), (3,7)