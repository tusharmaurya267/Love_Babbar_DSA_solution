/*
https://leetcode.com/problems/kth-smallest-element-in-a-bst/
*/

class Solution {
public:
    void solve(TreeNode* root, int k, priority_queue<int>&maxh){
        if(!root) return;
        maxh.push(root->val);
        if(maxh.size()>k){
            maxh.pop();
        }
        solve(root->left,k,maxh);
        solve(root->right,k,maxh);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>maxh;
        solve(root,k,maxh);
        return maxh.top();

    }
};