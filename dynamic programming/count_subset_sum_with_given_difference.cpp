#include<bits/stdc++.h>
using namespace std;

// count(sum1 - sum2 = diff)
// sum1 + sum2 = total_sum
// 2sum1 = diff + total_sum
// calculate sum1 = (diff + total_sum)/2

int solve(int *arr , int n, int diff){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];

    int sum1=(diff+sum)/2;

    int m=1e9+7;
        int dp[n+1][sum1+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum1+1;j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum1+1;j++){
                if(arr[i-1]<=j){
                    dp[i][j]=((dp[i-1][j-arr[i-1]]) + (dp[i-1][j]));
                }
                else{
                    dp[i][j]=(dp[i-1][j]);
                }
            }
        }
        return dp[n][sum1];
}

int main(){
    int n;
    cin >> n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        arr[i]=x;
    }
    int diff;
    cin >> diff;
    cout << solve(arr,n,diff);
}