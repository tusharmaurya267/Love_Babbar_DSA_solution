/*
https://practice.geeksforgeeks.org/problems/maximize-sum-after-k-negations1149/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        long long int mini=INT_MAX;
        long long int ans=0;
        int M=1e9+7;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]<0 && k!=0){
                a[i]=(abs(a[i]))%M;
                k--;
            }
            mini=(min(mini,a[i]))%M;
            ans=(ans+a[i])%M;
        }
        if(k%2==0) return ans;
        return (ans-mini-mini)%M;
    }
};