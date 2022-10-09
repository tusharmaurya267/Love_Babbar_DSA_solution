/*
https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
*/

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        long long x=1;
        while(x<=n){
            if(x==n) return true;
            x=x<<1;
        }
        return false;
    }
};