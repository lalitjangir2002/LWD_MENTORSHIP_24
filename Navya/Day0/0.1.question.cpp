#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%(n);
        vector<int>s;
        for(int i=0;i<n-k;i++){
            s.push_back(nums[i]);
        }
        int j=0;
        for(int i=n-k;i<n;i++){
            nums[j++]=nums[i];
        }
        for(int i=0;i<s.size();i++){
            nums[j++]=s[i];
        }
    }
};
int main(){
    Solution s;
    vector<int>nums;
    int k;
    cin>>k;
    s.rotate(nums,k);
    return 0;
}