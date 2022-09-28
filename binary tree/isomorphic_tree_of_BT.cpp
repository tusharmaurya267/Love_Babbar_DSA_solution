/*
https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1
*/


/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool check(Node *p, Node*q ){
        if(!p && !q)return true;
        if(!p && q)return false;
        if(p && !q)return false;
        if(p->data!=q->data)return false;
        bool a=check(p->left,q->right) && check(p->right,q->left);
        bool b=check(p->left,q->left) && check(p->right,q->right);
        return a || b;
    }
    
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    bool ans=true;
    ans =check(root1 ,root2 );
    return ans;
    }
};