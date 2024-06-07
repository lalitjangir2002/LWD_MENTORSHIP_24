#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int total = 0;
        for (int i = 0; i < k; ++i)
        {
            total += cardPoints[i];
        }

        int maxi = total;

        for (int i = 0; i < k; ++i)
        {
            total -= cardPoints[k - 1 - i];
            total += cardPoints[n - 1 - i];
            maxi = max(maxi, total);
        }

        return maxi;
    }
};