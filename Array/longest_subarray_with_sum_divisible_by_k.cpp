/*
https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    /* 
            If same remainder occurs again that means that space or the elements b/w 
            the two same occurences when divided by k leaves remainder 0 or it consumes that part
         */
	    // Complete the function
	    unordered_map<int,int>mp;
	    int sum=0;
	    int maxi_idx=0;
	    mp[0]=-1;
	    
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        int rem=sum%k;
	        if(rem<0){
	            rem=rem+k;
	        }
	        if(mp.find(rem)!=mp.end()){
	            maxi_idx=max(maxi_idx,i-mp[rem]);
	        }
	        else{
	            mp[rem]=i;
	        }
	        
	    }
	    return maxi_idx;

	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends