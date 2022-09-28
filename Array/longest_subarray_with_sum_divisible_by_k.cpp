/*
https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1
*/

class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
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
