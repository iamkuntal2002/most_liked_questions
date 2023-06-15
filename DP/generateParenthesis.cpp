#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    void helper(int open, int close, int n, vector<string> &res,string str){
        if(open == n && close == n){
            res.push_back(str);
            return;
        }
        if(open < n){
            helper(open+1,close,n,res,str+"(");
        }
        if(close <open) helper(open,close+1,n,res,str+")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr = "";
        helper(0,0,n,res,curr);
        return res;
    }
};