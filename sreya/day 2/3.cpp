#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int, int> mp;
        int start = 0,end = 0,ans = 0;
        for(int i = 0;i<n;i++){
            mp[fruits[i]]++;
            end++;

            while(mp.size()>2){
                mp[fruits[start++]]--;
                if(mp[fruits[start-1]] == 0){
                    mp.erase(fruits[start-1]);
                }
            }
            ans = max(ans,end-start);

        }
        return ans;
    }
};