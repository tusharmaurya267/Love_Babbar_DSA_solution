/*
https://www.geeksforgeeks.org/flatten-a-linked-list-with-next-and-child-pointers/
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head) return nullptr;
        queue<Node*>q;
        q.push(head);
        Node* temp=nullptr;
        vector<int>ans;
        while(!q.empty())
        {
            Node* root=q.front();
            q.pop();
            while(root){
                if(root->child) q.push(root->child);
                ans.push_back(root->val);
                root=root->next;
            }
            
        }
        int flag=0;
        for(int i=0;i<ans.size();i++){
            Node* t=new Node(ans[i]);
            if(flag==0){
                head=t;
                temp=t;
                flag=1;
            }
            else{
                temp->next=t;
                temp=temp->next;
            }
            
        }
        return head;
    }
    
};