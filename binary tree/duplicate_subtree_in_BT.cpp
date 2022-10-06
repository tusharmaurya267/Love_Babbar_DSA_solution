/*
https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1
*/

class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
     int dupSub(Node *root) {
        // code here
        vector<Node*> v;
        inorder(root,v);
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                int size=0;
                if(isIdentical(v[i],v[j],size)&&size>1)
                return 1;
            }
        }
        return 0;
   }
   
   void inorder(Node *root,vector<Node*> &v)
   {
       if(!root) return;
       
       inorder(root->left,v);
       v.push_back(root);
       inorder(root->right,v);
   }
   
   bool isIdentical(Node *r1, Node *r2,int &size)
   {
       
       if((!r1&&r2||r1&&!r2)) return false;
       if(!r1&&!r2) return true;
       size++;
       bool f1=isIdentical(r1->left,r2->left,size);
       bool f2=isIdentical(r1->right,r2->right,size);
       return (r1->data==r2->data&&f1&&f2);
       
   }
};