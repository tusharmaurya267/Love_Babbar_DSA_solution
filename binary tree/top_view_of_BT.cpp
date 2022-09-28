/*
https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1
*/


/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            Node* temp=p.first;
            int lvl=p.second;
            if(mp.find(lvl)==mp.end()){
                mp[lvl]=temp->data;
            }
            if(temp->left) q.push({temp->left,lvl-1});
            if(temp->right) q.push({temp->right,lvl+1});
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }

};

