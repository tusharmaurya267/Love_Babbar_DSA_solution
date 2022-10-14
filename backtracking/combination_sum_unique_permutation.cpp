/*
https://leetcode.com/problems/combination-sum-ii/
*/

class Solution {
public:
    void solve(vector<vector<int>>&ans, vector<int>arr, int t, int i, vector<int>temp, int sum){

        if(t==sum){
            ans.push_back(temp);
            return;
        }

        if(t<sum || i == arr.size()) return;

        temp.push_back(arr[i]);
        sum=sum+arr[i];
        solve(ans,arr,t,i+1,temp,sum);
        sum=sum-arr[i];
        temp.pop_back();

        while(i+1 < arr.size() && arr[i]==arr[i+1])i++;
        solve(ans,arr,t,i+1,temp,sum);

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        solve(ans,candidates,target,0,temp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};