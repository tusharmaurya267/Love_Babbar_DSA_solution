/*
https://leetcode.com/problems/subtree-of-another-tree/
*/

class Solution {
public:
  
  bool ans=false;
    bool check(TreeNode* root, TreeNode* subroot){
      if(!root && !subroot) return true;
      if(!root && subroot) return false;
      if(root && !subroot) return false;
      if(root->val != subroot->val) return false;
      return check(root->left,subroot->left) && check(root->right,subroot->right);
    }
    void find(TreeNode* root, int n, TreeNode* subroot){
      if(!root) return;
      if(root->val==n){
        ans=check(root,subroot);
      }
      find(root->left,n,subroot);
      find(root->right,n,subroot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      if(!subRoot) return true;
      if(!root) return false;
        find(root, subRoot->val, subRoot);
      return ans;
    }
};