/*
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&status[]=unsolved&sortBy=submissions
*/

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int sum=0;
        int i=0;
        int j=0;
        vector<int>ans(2);
        while(i<n){
            sum=sum+arr[i];
            
            while(sum>s && j<i){
                sum=sum-arr[j];
                j++;
            }
            if(sum==s ){
                return {j+1,i+1};
            }
            i++;
        }
        return {-1};
    }
};