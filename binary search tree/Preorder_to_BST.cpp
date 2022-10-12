class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    Node* solve(int pre[], int size, int &i, int bound){
        if(i==size || pre[i]>bound) return nullptr;
        Node *root=newNode(pre[i]);
        i++;
        root->left=solve(pre,size,i,root->data);
        root->right=solve(pre,size,i,bound);
        return root;
    }
    Node* post_order(int pre[], int size)
    {
        int i=0; 
        int bound=INT_MAX;
        return solve(pre,size,i,bound);

    }
};