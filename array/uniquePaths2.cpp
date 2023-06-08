#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/unique-paths-ii/
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int n = obs.size();
        int m = obs[0].size();
        if(obs[0][0] == 1) return 0;
        int mod = 2*1e9;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        dp[0][0] = 1;
        // if(obs[0][1] == 0) dp[0][1] = 1;
        // if(obs[1][0] == 0) dp[1][0] = 1;   
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(obs[i][j] == 1 || (i == 0 && j==0)) continue;
                else{
                    dp[i][j] = ((i>0 ? dp[i-1][j] : 0) + (j>0 ? dp[i][j-1] : 0))%mod;
                }
            }
        }
        return dp[n-1][m-1];
    }
};