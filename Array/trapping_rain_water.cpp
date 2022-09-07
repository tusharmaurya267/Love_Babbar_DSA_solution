/*
https://leetcode.com/problems/trapping-rain-water/
*/


class Solution {
public:
    int trap(vector<int>& height) {
      
      int left_maxi=INT_MIN;
      int right_maxi=INT_MIN;
      int i=0;
      int j=height.size()-1;
      int sum=0;
      while(i<j){
//         two pointer
        left_maxi=max(left_maxi,height[i]);
        right_maxi=max(right_maxi,height[j]);
        if(height[i]<=height[j]){
          sum+=left_maxi-height[i]; i++;
        }
        else{
          sum+=right_maxi-height[j]; j--;
        }
        
      }
      return sum;
    }
};