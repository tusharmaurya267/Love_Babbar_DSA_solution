/*
https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
*/

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int min=INT_MAX;
    	int max=INT_MIN;
    	for(int i=0;i<N;i++)
    	{
    	    if(min>A[i]){
    	        min=A[i];
    	    }
    	    if(max<A[i]){
    	        max=A[i];
    	    }
    	}
    	return max+min;
    }
};
