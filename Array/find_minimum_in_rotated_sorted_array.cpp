/*
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
      int j=nums.size()-1;
      int i=0;
      int mini=INT_MAX;
      while(i<=j){
        int mid=(j-i)+i/2;
        if(nums[i]<nums[mid]){
          mini=min(mini,nums[i]);
          i=mid+1;
        }
        else{
          mini=min(mini,nums[mid]);
          j=mid-1;
        }
        
      }
      return mini;
    }
};