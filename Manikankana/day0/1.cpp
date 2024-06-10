#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    void reverse(vector<int> &nums,int start,int end)
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int m=nums.size();
        reverse(nums,(m-k),(m-1));
        reverse(nums,0,(m-k-1));
        reverse(nums,0,(m-1));
    }
};