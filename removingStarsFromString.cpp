#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto &ch : s){
            if(ch == '*'){
                if(!st.empty()) st.pop();
            }
            else st.push(ch);
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};