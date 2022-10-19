/*
https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1
*/

class Solution{
public:

    bool isvalid(int i, int j, int n, vector<vector<int>>&board){
        int tempi=i;
        while(tempi>=0){
            if(board[tempi][j]==1) return false;
            tempi--;
        }
        
        tempi=i;
        int tempj=j;
        while(tempi>=0 && tempj<=n-1){
            if(board[tempi][tempj]==1) return false;
            tempi--;
            tempj++;
        }
        
        tempi=i;
        tempj=j;
        while(tempi>=0 && tempj>=0){
            if(board[tempi][tempj]==1) return false;
            tempi--;
            tempj--;
        }
        return true;
    }
    
    void solve(int i, int n, vector<vector<int>>&ans, vector<vector<int>>&board){
        if(i==n){
            vector<int>temp;
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(board[j][k]!=0) temp.push_back(k+1);
                    // temp.push_back(board[j][k]);
                }
            }
            ans.push_back(temp);
            return;
        }
        for(int j=0;j<n;j++){
            if(isvalid(i,j,n,board)){
                board[i][j]=1;
                solve(i+1,n,ans,board);
                board[i][j]=0;
            }
        }

    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<vector<int>>board(n,vector<int>(n,0));
        solve(0,n,ans,board);
        return ans;
    }
};