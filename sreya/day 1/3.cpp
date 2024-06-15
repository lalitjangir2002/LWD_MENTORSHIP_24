#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int min_no = INT_MAX;
        for(int i = 0;i<n-k+1;i++){
            int count = 0;
            for(int j = i;j<i+k;j++){
                if(blocks[j] == 'W') count++;
            }
            min_no = min(min_no,count);
        }
        return min_no;
    }
};