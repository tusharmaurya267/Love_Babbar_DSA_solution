/*
https://practice.geeksforgeeks.org/problems/subsets-1613027340/1
*/

class Solution
{
    public:
    void solve(vector<int>A, vector<vector<int>>&ans, vector<int>op ){
        if(A.size()==0){
            ans.push_back(op);
            return;
        }
        vector<int>op1=op;
        op1.push_back(A[0]);
        A.erase(A.begin()+0);
        solve(A,ans,op);
        solve(A,ans,op1);
        return;
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>op;
        
        solve(A,ans,op);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};