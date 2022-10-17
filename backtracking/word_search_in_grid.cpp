/*
https://practice.geeksforgeeks.org/problems/word-search/1
*/

class Solution {
public:
    bool solve(int i, int j, int n, int m, vector<vector<char>>& board, string word, int k){
        if(k==word.size()) return true;
        if(i<0 || j<0 || i==n || j==m || word[k] != board[i][j]) return false;
        
        char ch=board[i][j];
        board[i][j]='$';
        bool op1=solve(i+1,j,n,m,board,word,k+1);
        bool op2=solve(i-1,j,n,m,board,word,k+1);
        bool op3=solve(i,j+1,n,m,board,word,k+1);
        bool op4=solve(i,j-1,n,m,board,word,k+1);
        board[i][j]=ch;
        return op1 || op2 || op3 || op4;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(solve(i,j,n,m,board,word,0)) return true;
            }
        }
        return false;
    }
};