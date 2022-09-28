/*
https://leetcode.com/problems/binary-tree-level-order-traversal/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
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