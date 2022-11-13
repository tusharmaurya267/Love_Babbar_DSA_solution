/*
https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution
{
    public:

    // memoization 
    int dp[1002][1002];
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    {   
        if(n==0 || W==0) return 0;
        
        // using memoization
        if(dp[n][W] != -1) return dp[n][W];
        else if(W>=wt[n-1]){
            return dp[n][W]= max(val[n-1]+knapSack(W-wt[n-1], wt, val, n-1),
            knapSack(W, wt, val, n-1));
        }
        else{
            return dp[n][W]= knapSack(W, wt, val, n-1);
        }
    }
    
    // TOP_DOWN APPROACH
    // int knapSack(int W, int wt[], int val[], int n) 
    // {   
    //     int dp[n+1][W+1];
    //     for(int i=0;i<n+1;i++){
    //         for(int j=0;j<W+1;j++){
    //             if(i==0 || j==0) dp[i][j]=0;

    //             else if(wt[i-1]<=j){
    //                 dp[i][j]=max(dp[i-1][j-wt[i-1]]+val[i-1] , dp[i-1][j]);
    //             }
                
    //             else{
    //                 dp[i][j]=dp[i-1][j];
    //             }
    //         }
    //     }
    //     return dp[n][W];
    // }
};