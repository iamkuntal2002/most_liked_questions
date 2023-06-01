#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftpt = 0;
        int rightpt = height.size() - 1;
        int maxarea = 0;
        while(leftpt < rightpt){
            int width = rightpt - leftpt;
            int heigh = min(height[leftpt], height[rightpt]);
            int currarea = heigh * width;
            maxarea = max(maxarea, currarea);
            if(height[leftpt] < height[rightpt]) leftpt++;
            else if(height[leftpt] > height[rightpt]) rightpt--;
            else {
                leftpt++;
                rightpt--;
            }
        }
        return maxarea;
    }
};