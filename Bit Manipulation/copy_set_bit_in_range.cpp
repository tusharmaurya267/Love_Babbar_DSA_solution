/*
https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1
*/

class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        
        int cnt=0;
        for(int i=l-1;i<r;i++){
            if((y&(1<<i))!=0){
                x=x|(1<<i);
            }
        }

        return x;
    }
};