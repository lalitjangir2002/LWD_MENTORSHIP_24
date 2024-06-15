#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    int k = pat.size();
	    vector <int> pat_count (26,0);
	    vector <int> txt_count (26,0);
	    
	    for(int i = 0;i<k;i++){
	        pat_count[pat[i] - 'a']++;
	        txt_count[txt[i] - 'a']++;
	    }
	    
	    int count = 0;
	    if(pat_count == txt_count) count++;
	    
	    for(int i = k;i<n;i++){
	        txt_count[txt[i] - 'a']++;
	        txt_count[txt[i-k] - 'a']--;
	        if(pat_count == txt_count) count++;
	    }
	    return count;
	}

};