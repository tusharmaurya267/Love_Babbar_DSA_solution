/*
https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/
*/

class BSTIterator {
public:

    stack<TreeNode*>s;
    bool reverse;
    BSTIterator(TreeNode* root, bool isreverse) {
        reverse=isreverse;
        pushAll(root);
    }
    
    int next() {
        TreeNode* t=s.top();
        s.pop();
        if(reverse) pushAll(t->left);
        else pushAll(t->right);
        return t->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }

    void pushAll(TreeNode* root){
        while(root){
            s.push(root);
            if(reverse) root=root->right;
            else root=root->left;
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l( root, false);
        BSTIterator r( root, true);
        int i = l.next();
        int j = r.next();
        while(i<j){
            if(i+j==k) return true;
            if((i+j)<k) i=l.next();
            else j=r.next();
        }
        return false;
    }
};