/*
https://leetcode.com/problems/binary-tree-level-order-traversal/
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      
      if(!root) return {};
      vector<vector<int>>ans;
      queue<TreeNode*>q;
      q.push(root);
      while(!q.empty()){
        vector<int>temp_v;
        int size=q.size();
        while(size--){
          TreeNode* temp=q.front();
          q.pop();
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
          temp_v.push_back(temp->val);
        }
        ans.push_back(temp_v);
      }
      return ans;
    }
};