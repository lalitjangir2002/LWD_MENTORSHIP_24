#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void backtrack(vector<int> &nums, vector<vector<int>> &result, vector<int> &subset, int start)
    {

        result.push_back(subset);
        for (int i = start; i < nums.size(); ++i)
        {
            subset.push_back(nums[i]);
            backtrack(nums, result, subset, i + 1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> result;
        vector<int> subset;
        backtrack(nums, result, subset, 0);
        return result;
    }
};