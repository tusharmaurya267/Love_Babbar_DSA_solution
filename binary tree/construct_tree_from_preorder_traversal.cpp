/*
https://practice.geeksforgeeks.org/problems/construct-tree-from-preorder-traversal/1
*/

Node* build(int n, int pre[], char preLN[], int &i){
    if(i>=n ) return nullptr; 
    
    if(preLN[i]=='L'){
        Node* temp=new Node(pre[i]);
        i++;
        return temp;
    }
    
    Node* root=new Node(pre[i]);
    i++;
    root->left=build(n,pre,preLN,i);
    root->right=build(n,pre,preLN,i);
    return root;
}

struct Node *constructTree(int n, int pre[], char preLN[])
{
    int i=0;
    return build(n,pre,preLN,i);
}