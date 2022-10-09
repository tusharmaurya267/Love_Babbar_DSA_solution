/*
https://practice.geeksforgeeks.org/problems/division-without-using-multiplication-division-and-mod-operator/1
*/

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        long long q=0;
        while(dividend>divisor){
            dividend=dividend-divisor;
            q++;
        }
        if(dividend<0 || divisor<0) q=-q;
        return q;
    }
};