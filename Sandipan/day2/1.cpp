#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        int k = 1;
        for (j = 0; j < nums.size(); ++j)
        {
            if (nums[j] == 0)
                k--;
            if (k < 0 and nums[i++] == 0)
                k++;
        }
        return j - i - 1;
    }
};