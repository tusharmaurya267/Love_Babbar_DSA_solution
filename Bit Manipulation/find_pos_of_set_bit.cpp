/*
https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1
*/

class Solution {
  public:
    int findPosition(int N) {
        // code here
        int c=0;
        int i=1;
        int pos=0;
        while(N){
            if(N&1!=0){ c++; pos=i; }
            N=N>>1;
            i++;
        }
        if(c==1)return pos;
        return -1;
    }
};