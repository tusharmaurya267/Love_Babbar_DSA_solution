/*
https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1
*/

void small(Node* root, Node*& pre, int key){
    if(!root) return;
    if(root->key >= key) small(root->left,pre,key);
    else{
        pre=root;
        small(root->right,pre,key);
    }
    return;
}
void large(Node* root, Node*& suc, int key){
    if(!root) return;
    if(root->key <= key) large(root->right,suc,key);
    else{
        suc=root;
        large(root->left,suc,key);
    }
    return;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root) return;
    small(root,pre,key);
    large(root,suc,key);
}