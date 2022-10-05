/*
https://leetcode.com/problems/subtree-of-another-tree/
*/

class Solution {
public:
  
    void check(TreeNode* root, TreeNode* subroot , bool &flag){
      
      if(!root && !subroot) return;
      if(!root && subroot){ flag=false; return; }
      if(root && !subroot){ flag=false; return; }
      if(root->val != subroot->val){
        flag=false; 
        return;
      }
      
      check(root->left,subroot->left,flag);
      check(root->right,subroot->right,flag);
        
    }
    void find(TreeNode* root, TreeNode* subroot, bool &ans){
      if(!root) return;
      else{
        if(root->val == subroot->val){
        bool flag=true;
        check(root , subroot , flag);
        if(flag) ans=flag;
        }
      }
      find(root->left,subroot,ans);
      find(root->right,subroot,ans);
      return;
      
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
      if(!subRoot) return true;
      if(!root) return false;
      bool ans=false;
      find(root, subRoot, ans);
      return ans;
    }
};
