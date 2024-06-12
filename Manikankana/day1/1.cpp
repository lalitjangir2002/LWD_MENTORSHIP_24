#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k=pat.size();
    int n=txt.size();
    map<char,int>mp1;
    map<char,int>mp2;
    int count=0;
    int i=0;int j=0;
    
    for(int i=0;i<k;i++){
        mp1[pat[i]]++;
    }
    
    while(j<n){
        mp2[txt[j]]++;
        if(j-i+1<k){
            j++;
        }
        else{
            if(mp1==mp2){
                count++;
            }
            mp2[txt[i]]--;
            if (mp2[txt[i]] == 0) {
                mp2.erase(txt[i]);
                }
            i++;
            j++;
            
        }
    }
    return count;
	}

};