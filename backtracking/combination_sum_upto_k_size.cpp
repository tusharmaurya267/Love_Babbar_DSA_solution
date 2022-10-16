/*
https://leetcode.com/problems/combination-sum-iii/
*/

class Solution {
public:

    void solve(vector<vector<int>>&ans, vector<int>temp, int i, int k, int n, int sum){
        
        if(k<0) return;
        if(sum>n) return;
        if(k==0){
            if(sum==n) ans.push_back(temp);
            return;
        }
        if(i==10) return;
        temp.push_back(i);
        sum=sum+i;
        solve(ans,temp,i+1,k-1,n,sum);
        temp.pop_back();
        sum=sum-i;

        solve(ans,temp,i+1,k,n,sum);

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,1,k,n,0);
        sort(ans.begin(),ans.end());
        return ans;
    }

};