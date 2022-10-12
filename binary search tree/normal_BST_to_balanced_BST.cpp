/*
https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1
*/

void inorder(Node* root,vector<int>&v){
    if(!root) return;
    inorder(root->left,v);
    v.push_back(root->data);
    
    inorder(root->right,v);
}

Node* build(int start,int end,vector<int>&v){
    if(start>end) return nullptr;
    
    int mid=(end+start)/2;
    Node* root= new Node(v[mid]);
    root->left=build(start,mid-1,v);
    root->right=build(mid+1,end,v);
    return root;
}

Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int> v;
	inorder(root,v);
	return build(0,v.size()-1,v);
}