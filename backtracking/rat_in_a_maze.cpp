/*
https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
*/

class Solution{
    public:
    
    void solve(int i, int j, int n, vector<vector<int>> &m, vector<string>&ans, string &path){
        if(i<0 || j<0 || i==n || j==n || m[i][j]==0) return;
        if(i==n-1 && j==n-1){
            ans.push_back(path);
            return;
        }
        
        m[i][j]=0;
        path.push_back('D');
        solve(i+1,j,n,m,ans,path);
        path.pop_back();
        
        path.push_back('L');
        solve(i,j-1,n,m,ans,path);
        path.pop_back();
        
        path.push_back('R');
        solve(i,j+1,n,m,ans,path);
        path.pop_back();
        
        path.push_back('U');
        solve(i-1,j,n,m,ans,path);
        path.pop_back();
        m[i][j]=1;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string path="";
        solve(0,0,n,m,ans,path);
        return ans;
    }
};