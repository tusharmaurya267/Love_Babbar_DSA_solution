/*
https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1
*/

bool solve(Node* root, int mini, int maxi){
    if(!root) return false;
    if(mini == maxi) return true;
    bool a=solve(root->left, mini, root->data-1);
    bool b=solve(root->right, root->data+1, maxi);
    if(a||b) return true;
    else return false;

}
bool isDeadEnd(Node *root)
{
    int flag=0;
    return solve(root,1,INT_MAX);
}