#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-original-array-from-doubled-array/

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        multiset<int> st;
        for(int i : changed) st.insert(i);
        vector<int> res;
        while(!st.empty()){
            int first = *st.begin();
            st.erase(st.find(first));
            if(st.find(2*first) == st.end()) return {};
            // else {
                res.push_back(first);
                st.erase(st.find(2*first));
            // }
        }
        return res;
    }
};