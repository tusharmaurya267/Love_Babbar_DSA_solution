/*
https://leetcode.com/problems/product-of-array-except-self/
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int>ans((int) nums.size(),0);
      int n=nums.size();
      int count=0;
      int pro=1;
      int idx=0;
      
      // ALTERNATE:-   
      // product -> left to right
      // pro -> right to left 
      // ans -> product * pro
      
      for(int i=0;i<n;i++){
        if(nums[i]==0){
          count++;
          idx=i;
          continue;
        } 
        else{
          pro=pro*nums[i];
        } 
      }
      
      if(count>=2) return ans;
      
      if(count==1){
        ans[idx]=pro;
        return ans;
      }
      
      if(count==0){
        for(int i=0;i<n;i++){
          //cout << pro << " ";
          ans[i]=pro/nums[i];
        }
        
      }
      return ans;
    }
 
};