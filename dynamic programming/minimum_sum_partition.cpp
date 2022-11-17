/*
https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++) sum+=arr[i];
	    
	    bool dp[n+1][sum+1];
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<sum+1;j++){
	            if(i==0) dp[i][j]=false;
	            if(j==0) dp[i][j]=true;
	        }
	    }
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<sum+1;j++){
	            if(arr[i-1]<=j){
	                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
	            }
	            else{
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    vector<int>range;
	    for(int i=0;i<(sum+1);i++){
	        if(dp[n][i]==true) range.push_back(i);
	    }

	    int n1=range.size();
	    int mini=INT_MAX;
	    for(int i=0;i<n1;i++){
	        mini=min(mini, abs(sum-(2*range[i])));
	    }
	    return mini;
	} 
};



// BOTTOM UP APPROACH
// class Solution{
//   private:
//     vector<vector<int>>dp;
//     int ans = INT_MAX;
    
//     int rec(int arr[], int n, int i, int sum, int left) {
//         if(i == n)
//             return ans = min(ans, abs(sum - left));
        
        
//         if(dp[i][left] != -1)
//             return dp[i][left];
        
//         return dp[i][left] = min (
//                 rec(arr, n, i + 1, sum - arr[i], left + arr[i]), 
//                 rec(arr, n, i + 1, sum, left)
//             );
//     }
    
//   public:
// 	int minDifference(int arr[], int n) {
// 	    if(n == 1)
// 	        return arr[0];
	        
	    
// 	    int sum = accumulate(arr, arr + n, 0);
// 	    dp.resize(n , vector<int>(sum, -1));
	    
// 	    return rec(arr, n, 0, sum, 0);
// 	} 
// };