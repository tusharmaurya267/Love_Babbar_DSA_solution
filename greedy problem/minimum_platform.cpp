/*
https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int max=0;
    int count=0;
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
        if(n==0) return 0;
        
    	int count=1;
    	int i=0;
    	int j=1;
    	while(j<n){
    	    if(arr[j] <= dep[i]) count++;
    	    else i++;
    	    j++;
    	}
    	return count;
    	
    }
};