/*
https://leetcode.com/problems/recover-binary-search-tree/description/
*/

class Solution {
public:
    TreeNode* first=nullptr;
    TreeNode* middle=nullptr;
    TreeNode* last=nullptr;
    TreeNode* pre=nullptr;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(pre!=nullptr && (pre->val > root->val )){
            if(!first){
                first=pre;
                middle=root;
                cout << first->val << middle->val;
            }
            else{ last=root;
            cout << first->val << last->val;
        }
        }
        pre=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        if(!first) return;
        if(last) swap(first->val,last->val);
        else swap(first->val,middle->val);

    }
};