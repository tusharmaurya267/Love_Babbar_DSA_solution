/*
https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int rob1=0;
        int rob2=0;
        for(int i=0 ; i < n ; i++){
            int temp=max(arr[i]+rob1 , rob2);
            rob1= rob2;
            rob2= temp;
        }
        return rob2;
    }
};