#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int zeroCount = 0;
        int maxi = INT_MIN;
        for(int j = 0;j<n;j++){
            if(nums[j] == 0){
                zeroCount++;
            }
            while(zeroCount>1){
                if(nums[i] == 0){
                    zeroCount--;
                }
                i++;
            }
            maxi = max(maxi,j-i);
        }
        return maxi;
    }
};