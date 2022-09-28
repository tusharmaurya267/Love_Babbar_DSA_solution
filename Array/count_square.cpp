/*
https://practice.geeksforgeeks.org/problems/count-squares3649/1
*/

class Solution {
  public:
    int countSquares(int N) {
        int count=0;
        // code here
        for(int i=1;i<N;i++){
            if((i*i)<N){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};

