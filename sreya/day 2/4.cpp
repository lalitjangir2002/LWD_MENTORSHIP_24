#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int count = 0,answer = 0,start = 0,n = answerKey.size(),end = 0;
        int countT = 0,countF = 0;
        while(start<n){
            if(answerKey[start] == 'T'){
                countT++;
            }
            else{
                countF++;
            }
            while(countT>k && countF>k){
                if(answerKey[end] == 'T'){
                    countT--;
                }
                else{
                    countF--;
                }
                end++;
            }
            answer = max(answer,start-end+1);
            start++;
        }
        return answer;
    }
};