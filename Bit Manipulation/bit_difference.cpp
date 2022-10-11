/*
https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
*/

class Solution{
    public:
    
    int countBitsFlip(int a, int b){
        
        int num=a^b;
        int count=0;
        while(num){
            if((num & 1 )!=0) count++;
            num=num>>1;
        }
        return count;
        
    }
};