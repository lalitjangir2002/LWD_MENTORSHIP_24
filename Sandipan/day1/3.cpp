#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        int n = blocks.length();
        int minOperations = k;
        int whiteCount = 0;
        for (int i = 0; i < k; i++)
        {
            if (blocks[i] == 'W')
            {
                whiteCount++;
            }
        }
        minOperations = whiteCount;

        // Sliding window to check the rest of the blocks
        for (int i = k; i < n; i++)
        {
            if (blocks[i - k] == 'W')
            {
                whiteCount--;
            }
            if (blocks[i] == 'W')
            {
                whiteCount++;
            }
            minOperations = min(minOperations, whiteCount);
        }

        return minOperations;
    }
};