/*
https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1
*/

Node* findlastright(Node* root){
    if(!root->right) return root;
    return findlastright(root->right);
}

Node *helper(Node* root){
    if(!root->left) return root->right;
    if(!root->right) return root->left;
    Node* temp=root->right;
    Node* lastright= findlastright(root->left);
    lastright->right=temp;
    return root->left;
}

Node *deleteNode(Node *root, int x) {
    if(!root) return nullptr;
    if(root->data == x) return helper(root);
    Node* temp=root;
    while(root){
        if(root->data>x){
            if(root->left && root->left->data==x){
                root->left=helper(root->left);
                break;
            }
            else root=root->left;
        }
        else{
            if(root->right && root->right->data==x){
                root->right=helper(root->right);
                break;
            }
            else root=root->right;
        }
    }
    return temp;
}
