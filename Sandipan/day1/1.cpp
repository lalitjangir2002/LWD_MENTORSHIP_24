#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool check(unordered_map<char, int> &a, unordered_map<char, int> &b)
    {
        for (auto &pair : a)
        {
            if (b[pair.first] != pair.second)
            {
                return false;
            }
        }
        return true;
    }

    int search(string pat, string txt)
    {
        int txtLength = txt.length();
        int patLength = pat.length();
        int count = 0;

        if (patLength > txtLength)
            return 0;

        unordered_map<char, int> patFreq, windowFreq;

        for (char ch : pat)
        {
            patFreq[ch]++;
        }

        for (int i = 0; i < patLength; i++)
        {
            windowFreq[txt[i]]++;
        }

        if (check(patFreq, windowFreq))
        {
            count++;
        }

        for (int i = patLength; i < txtLength; i++)
        {

            windowFreq[txt[i]]++;

            windowFreq[txt[i - patLength]]--;
            if (windowFreq[txt[i - patLength]] == 0)
            {
                windowFreq.erase(txt[i - patLength]);
            }

            if (check(patFreq, windowFreq))
            {
                count++;
            }
        }

        return count;
    }
};