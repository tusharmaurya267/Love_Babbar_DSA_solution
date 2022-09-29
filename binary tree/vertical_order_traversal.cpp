/*
https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
*/

class Solution
{
    public:
    
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            pair<Node*,int>p=q.front();
            q.pop();
            Node*temp=p.first;
            int lvl=p.second;
            mp[lvl].push_back(temp->data);
            if(temp->left) q.push({temp->left,lvl-1});
            if(temp->right) q.push({temp->right,lvl+1});
        }
        for(auto i:mp){
            for(auto j:i.second){
                ans.push_back(j);
            }
        }
        return ans;
    }
};



