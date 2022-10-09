/*
https://www.geeksforgeeks.org/floor-and-ceil-from-a-bst/
*/

int findCeil(Node* root, int input) {
    if(!root) return -1;
    int ans=-1;
    while(root){
        if(input==root->data){ ans=root->data; return ans; }
        if(input<root->data) root=root->left;
        else{
            ans=root->data;
            root=root->right;
        }  
    }
    return ans;
    
    // Your code here
}