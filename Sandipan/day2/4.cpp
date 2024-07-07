#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int i = 0, j = 0, nT = 0, nF = 0, n = answerKey.size(), len = 0;

        while (j < n)
        {
            if (answerKey[j] == 'T')
            {
                nT++;
            }
            else
            {
                nF++;
            }

            int count = min(nT, nF);

            if (count <= k)
                len = max(len, j - i + 1);
            else
            {

                while (count > k)
                {
                    if (answerKey[i] == 'T')
                    {
                        nT--;
                    }
                    else
                    {
                        nF--;
                    }
                    count = min(nT, nF);
                    i++;
                }
            }
            j++;
        }
        return len;
    }
};