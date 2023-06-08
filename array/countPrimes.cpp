#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/count-primes/
class Solution {
public:
    int countPrimes(int n) {
        if(n ==0 || n==1) return 0;
        int count = 0;
        vector<bool> vis(n,false);
        for(int i =2;i<n;i++){
            if(vis[i]) continue;
            count++;
            for(long mult = (long)i*i;mult<n;mult +=i) vis[mult] = true;
        }
        return count;
    }
};