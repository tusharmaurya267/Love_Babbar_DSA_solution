/*
https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1
*/

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    vector<Node*>v;
    vector<int>s;
    void inorder(Node* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root);
        s.push_back(root->data);
        inorder(root->right);
    }
    Node *binaryTreeToBST (Node *root)
    {
        inorder(root);
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            v[i]->data=s[i];
        }
        return root;
    }
};