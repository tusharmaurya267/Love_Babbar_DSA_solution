/*
https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
*/

int findCeil(Node* root, int input) {
    if(!root) return -1;
    int ans=-1;
    while(root){
        if(input==root->data){ ans=root->data; return ans; }
        if(input>root->data) root=root->right;
        else{
            ans=root->data;
            root=root->left;
        }
    }
    return ans;
    
    // Your code here
}