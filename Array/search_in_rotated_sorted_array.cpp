/*
https://leetcode.com/problems/search-in-rotated-sorted-array/
*/

class Solution {
public:
  
    int search(vector<int>& nums, int target) {
      int i=0;
      int j=nums.size()-1;
        while(i<=j){
          int mid=(j-i)+i/2;
          if(nums[mid]==target) return mid;
//          check for sorted left side
          if(nums[mid]>=nums[i]){
//             then check that number exists in that range
//             emit the rest of the array
            if(target<=nums[mid] && target>=nums[i]){
              j=mid-1;
            }
            else{
              i=mid+1;
            }
          }
//           check for sorted right side
          else{
            if(target>=nums[mid] && target<=nums[j]){
              i=mid+1;
            }
            else{
              j=mid-1;
            }
          }
        }
      return -1;
    }
};