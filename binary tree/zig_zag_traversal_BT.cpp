/*
https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1
*/

class Solution{
    public:
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	int lvl=0;
    	if(!root) return {};
        vector<int>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            while(size--){
                Node *k=q.front();
                q.pop();
                if(k->left) q.push(k->left);
                if(k->right) q.push(k->right);
                temp.push_back(k->data);
            }
            if(lvl%2!=0) reverse(temp.begin(),temp.end());
            lvl++;
            for(int i=0;i<temp.size();i++){
                ans.push_back(temp[i]);
            }
        }
        
        return ans;
    	
    }
};
