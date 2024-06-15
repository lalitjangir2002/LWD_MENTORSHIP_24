#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left = 0, right = 0;
        int count = 0;
        long long sum = 0;
        while(right<n){
            sum+=nums[right];
            while((long long)nums[right] * (right-left+1) > sum+k){
                sum-=nums[left];
                left++;
            }
            count = max(count,right-left+1);
            right++;
        }
        return count;
    }
};