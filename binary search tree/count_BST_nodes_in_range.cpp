/*
https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1
*/

class Solution{
public:
    int count=0;
    int getCount(Node *root, int l, int h)
    {
        if(!root) return 0;
        
        if(root->data >= l && root->data <= h) count++;
        
        getCount(root->left,l,h);
        getCount(root->right,l,h);
        return count;
    }
};