#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        // Sort the array to use a sliding window
        sort(nums.begin(), nums.end());

        long long total = 0;
        long long left = 0, result = 0;

        // Use a sliding window to find the longest subarray
        for (int right = 0; right < nums.size(); ++right)
        {
            total += nums[right];

            // Check if we can make all elements in the window equal to nums[right]
            while (nums[right] * (right - left + 1) - total > k)
            {
                total -= nums[left];
                left++;
            }

            // Update the result with the maximum window size
            result = max(result, right - left + 1);
        }

        return result;
    }
};