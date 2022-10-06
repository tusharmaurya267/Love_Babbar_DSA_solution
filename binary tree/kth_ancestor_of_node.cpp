/*
https://www.geeksforgeeks.org/kth-ancestor-node-binary-tree-set-2/
*/

int flag=-1;
Node* kthAncestorDFS(Node *root, int node , int &k)
{  
    if (!root) return NULL;

    if(node==root->data) flag=1;
    if(flag==1) k++;
    
    Node* temp=kthAncestorDFS(root->left,node,k);
    Node* temp=kthAncestorDFS(root->right,node,k);
    
    if (k > 0 && flag==1) k--;
         
    if (k == 0)
    {
        cout<<"Kth ancestor is: "<<root->data;      
        return NULL;
    }

    return root;
}