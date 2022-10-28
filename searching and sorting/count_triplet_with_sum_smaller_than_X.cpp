/*
https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
	public:
	# define ll long long
	
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    ll count=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        int start=i+1;
	        int end=n-1;
	        while(start <= end){

	            int t=arr[start] + arr[end] + arr[i];
	            
    	        if(t < sum ){
    	            count+=end-start;
    	            start++;
    	        }
    	        else end--;
	        }
	    }
	    return count;
	}
};