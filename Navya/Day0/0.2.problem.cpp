#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 void s(int i,vector<int>nums,vector<int>&ans,vector<vector<int>>&res){
    if(i==nums.size()){
        res.push_back(ans);
        return ;
    }
    ans.push_back(nums[i]);
    s(i+1,nums,ans,res);
    ans.pop_back();
    s(i+1,nums,ans,res);
}
void s1(int i){
    for(int i=0)
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>res;
        s(0,nums,ans,res);
        return res;
    }
};
int main(){
    return 0;
}