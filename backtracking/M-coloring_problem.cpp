/*
https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1
*/

class Solution{
public:
 
    bool isvalid(int k, int n, bool graph[101][101], vector<int>&color, int idx){
        for(int i=0;i<n;i++){
            if( graph[k][i] && idx==color[i] ) return false;
        }
        return true;
    }
    
    bool solve(int k, int n, int m, bool graph[101][101], vector<int>&color){
        if(k==n) return true;
       
        for(int i=1;i<=m;i++){
            if(isvalid(k,n,graph,color,i)){
                color[k]=i;
                if(solve(k+1,n,m,graph,color)) return true;
                color[k]=0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int>color(n,0);
        return (solve(0,n,m,graph,color));
        
    }
};