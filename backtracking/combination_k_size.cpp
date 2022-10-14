/*
https://leetcode.com/problems/combinations/submissions/
*/

class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>temp, int n ,int k,int i){
        if(n<i){
            if(k==0) ans.push_back(temp);
            return;
        }

        temp.push_back(i);
        solve(ans,temp,n,k-1,i+1);
        temp.pop_back();
        solve(ans,temp,n,k,i+1);
        // if(k==temp.size()){
        //     ans.push_back(temp);
        //     return;
        // } 

        // for(int j=i; j<=n; j++){
        //     temp.push_back(j);
        //     solve(ans,temp,n,k,j+1);
        //     temp.pop_back();
        // }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,n,k,1);
        return ans;
    }
};