/*
https://practice.geeksforgeeks.org/problems/mirror-tree/1
*/
 
treenode* mirrorTree(node* root)
{
    // Base Case
    if(!root) return root;
    node *left=root->left;
    node *right=root->right;
    root->right=left;
    root->left=right;
    mirrorTree(root->left);
    mirrorTree(root->right);
    return root;
}
 