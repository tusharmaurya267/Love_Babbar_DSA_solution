/*
https://leetcode.com/problems/binary-tree-maximum-path-sum/
*/

class Solution {
public:
//     int check(TreeNode* root, int &res){
//       if(!root) return 0;
//       int l= check(root->left,res);
//       int r= check(root->right,res);
      
//       int temp=max(max(l,r)+root->val,root->val);
//       int ans=max(temp,(l+r+root->val));
//       res=max(res,ans);
//       return temp;
//     }
    int check(TreeNode* root, int &res){
      if(!root) return 0;
      int l= max(0,check(root->left,res));
      int r= max(0,check(root->right,res));
      
      res=max(res,l+r+root->val);
      return (max(l,r)+root->val);
    }
    int maxPathSum(TreeNode* root) {
      if(!root)  return 0;
      int res=INT_MIN;
      check(root,res);
      return res;
    }
};