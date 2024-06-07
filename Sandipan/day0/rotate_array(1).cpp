#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;
        if (k == 0)
            return nums;

        vector<int> temp(k);
        int j = 0;
        for (int i = n - k; i <= n - 1; ++i)
        {
            temp[j] = nums[i];
            j++;
        }

        for (int i = n - 1; i >= k; i--)
        {
            nums[i] = nums[i - k];
        }

        for (int i = 0; i <= k - 1; i++)
        {
            nums[i] = temp[i];
        }

        return nums;
    }
};
