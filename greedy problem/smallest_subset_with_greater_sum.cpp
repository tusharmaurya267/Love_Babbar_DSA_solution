/*
https://practice.geeksforgeeks.org/problems/smallest-subset-with-greater-sum/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
    public:
    int minSubset(vector<int> &a,int n){
        sort(a.begin(),a.end(),greater<int>());
        int M=1e9+7;
        long long int sum=0;

        for(int i=0;i<n;i++) sum=sum+a[i];
        
        long long int add=0;
        int i=0;
        while(add<=sum){
            add=add+a[i];
            sum=sum-a[i];
            i++;
        }
        return i;
    }
};