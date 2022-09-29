/*
https://leetcode.com/problems/same-tree/submissions/
*/

class Solution {
public:
    bool ans=true;
    bool check(TreeNode* p, TreeNode* q){
      if(!p && !q) return true;
      if(!p && q) return false;
      if(p && !q) return false;
      if(p->val != q->val) return false;
      return check(p->left,q->left) && check(p->right,q->right);
      
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        ans = check(p, q);
      return ans;
    }
};