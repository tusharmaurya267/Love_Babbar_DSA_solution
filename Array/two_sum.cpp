/*
https://leetcode.com/problems/two-sum/submissions/
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      unordered_map<int,int>s;
      vector<int>v;
      
      for(int i=0;i<nums.size();i++){
        int x=target-nums[i];
        if(s.find(x)!=s.end()){
          v.push_back(i);
          v.push_back(s[x]);
          break;
        }
        else s[nums[i]]=i;
      }
      return v;
    }
};