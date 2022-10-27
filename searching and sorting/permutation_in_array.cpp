/*
https://practice.geeksforgeeks.org/problems/permutations-in-array1747/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        if(a[0]+b[0] >= k && a[n-1]+b[n-1] >=k) return true;
        return false;
        
    }
};