/*
https://practice.geeksforgeeks.org/problems/set-bits0143/1
*/

class Solution {
  public:
    int setBits(int N) {
        int c=0;
        while(N){
            if(N&1!=0)c++;
            N=N>>1;
        }
        return c;
    }
};