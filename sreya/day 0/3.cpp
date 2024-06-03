#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        int rsum = 0;
        for(int i = 0;i<k;i++){
            lsum += cardPoints[i];
        }
        int maxSum = lsum;
        int end = cardPoints.size() - 1;
        for(int i = k-1;i>=0;i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[end];
            end--;
            maxSum = max(maxSum,(lsum + rsum));
        }
        return maxSum;
    }
};