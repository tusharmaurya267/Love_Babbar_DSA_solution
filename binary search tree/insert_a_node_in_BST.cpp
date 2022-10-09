/*
https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1
*/

Node* insert(Node* root, int Key) {
    if(!root) return new Node(Key);
    Node* curr=root;
    while(true){
        if(curr->data==Key) break;
        if(curr->data<Key){
            if(curr->right) curr=curr->right;
            else{
                curr->right=new Node(Key);
                break;
            } 
        }
        if(curr->data>Key){
            if(curr->left) curr=curr->left;
            else{
                curr->left=new Node(Key);
                break;
            } 
        }
    }
    return root;
}