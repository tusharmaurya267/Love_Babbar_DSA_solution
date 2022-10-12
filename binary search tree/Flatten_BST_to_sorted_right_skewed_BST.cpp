/*
https://www.geeksforgeeks.org/flatten-bst-to-sorted-list-increasing-order/
*/

void inorder(node* curr, node*& prev)
{
    if (curr == NULL)
        return;
    inorder(curr->left, prev);
    prev->left = NULL;
    prev->right = curr;
    prev = curr;
    inorder(curr->right, prev);
}

node* flatten(node* parent)
{
    node* prev = new node(-1);
 
    inorder(parent, prev);

    prev->left = NULL;
    prev->right = NULL;
    node* ret = dummy->right;
 
    delete dummy;
    return ret;
}