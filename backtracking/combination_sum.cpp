/*
https://leetcode.com/problems/combination-sum/description/
*/

class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>arr, int t, int i, vector<int>temp, int sum){

        if(t<sum || i == arr.size()) return;
        if(t==sum){
            ans.push_back(temp);
            return;
        }

        solve(ans,arr,t,i+1,temp,sum);
        temp.push_back(arr[i]);
        sum=sum+arr[i];
        solve(ans,arr,t,i,temp,sum);
        sum=sum-arr[i];
        temp.pop_back();

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,candidates,target,0,temp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};