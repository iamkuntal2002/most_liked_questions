#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/unique-binary-search-trees/
class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i<= n; i++){
            dp[i] = 0;
            for(int j = 0; j<i; j++)
                dp[i] += dp[j] * dp[i - j -1];  //formula for computing the catalan no
        }
        return dp[n];
    }
};