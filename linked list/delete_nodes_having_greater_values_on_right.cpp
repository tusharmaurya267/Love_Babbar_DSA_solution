/*
https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1
*/

class Solution
{
    public:
    
    Node* reverse(Node* head){
        Node* temp=head;
        Node* pre=nullptr;
        Node* frd=nullptr;
        while(temp){
            frd=temp->next;
            temp->next=pre;
            pre=temp;
            temp=frd;
        }
        return pre;
    }
    Node *compute(Node *head)
    {
        // your code goes here

        head = reverse(head);
        
        Node* gre=nullptr; Node* gre_t=nullptr;
        int maxi=INT_MIN;
        int flag=0;
        while(head){
            if(head->data >= maxi){
                Node* t=new Node(head->data);
                if(flag==0){
                    gre=t;
                    gre_t=t;
                    flag=1;
                }
                else{
                    gre->next=t;
                    gre=gre->next;
                }
                maxi=head->data;
            }
            head=head->next;
        }
        
        gre_t=reverse(gre_t);
        
        return gre_t;
        
    }
    
};