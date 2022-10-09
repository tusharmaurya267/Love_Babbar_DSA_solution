/*
https://leetcode.com/problems/binary-search-tree-iterator/
*/

class BSTIterator {
public:

    stack<TreeNode*>s;
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode* t=s.top();
        s.pop();
        pushAll(t->right);
        return t->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }

    void pushAll(TreeNode* root){
        while(root){
            s.push(root);
            root=root->left;
        }
    }
};