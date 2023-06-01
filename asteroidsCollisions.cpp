#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ass) {
        vector<int> res;
        stack<int> st;
        int n = ass.size();
        for(int i =0;i<n;i++){
            if(st.empty() || ass[i] >0){
                st.push(ass[i]);
            }
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(ass[i])) st.pop();
                if(!st.empty() && st.top() == abs(ass[i])) st.pop();
                else if(st.empty() || st.top()<0){
                    st.push(ass[i]);
                }
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
