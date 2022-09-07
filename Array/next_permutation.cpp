/*

https://leetcode.com/problems/next-permutation/submissions/

*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int len=nums.size();
      int i;
      for(i=len-2;i>=0;i--){
        if(nums[i]<nums[i+1]) break;
      }
      if(i<0) reverse(nums.begin(),nums.end());
      else{
        int j;
        for(j=len-1;j>=0;j--){
          if(nums[j]>nums[i]) break;
        }
        swap(nums[j],nums[i]);
        reverse(nums.begin()+i+1,nums.end());
      }
    }
};