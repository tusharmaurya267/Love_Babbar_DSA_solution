/*
https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1
*/

class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        int m=1e9+7;
        int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=((dp[i-1][j-arr[i-1]])%m + (dp[i-1][j])%m)%m;
                }
                else{
                    dp[i][j]=(dp[i-1][j])%m;
                }
            }
        }
        return dp[n][sum];
	}
};