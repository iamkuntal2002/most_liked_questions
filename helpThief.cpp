#include<bits/stdc++.h>
using namespace std;
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        vector<pair<int,int>> plates;
        for(int i =0;i<N;i++){
            plates.push_back({B[i],A[i]});
        }
        sort(plates.begin(),plates.end(),greater<pair<int,int>>());
        int ans = 0;
        for(int i =0;i<N && T>0;i++){
            int plate = min(plates[i].second,T);
            ans += plate*plates[i].first;
            T -= plate;
        }
        return ans;
    }
};
