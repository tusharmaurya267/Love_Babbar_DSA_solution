/*
https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1
*/

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        int e_flag=0;
        int o_flag=0;
        Node* temp=head;
        Node* even=nullptr; Node* even_t=even;
        Node* odd=nullptr; Node* odd_t=odd;
        int flag=0;
        while(temp){
            if(temp->data%2==0){
                Node* t=new Node(temp->data);
                if(flag==0){
                    even=t;
                    even_t=t;
                    flag=1;
                }
                else{
                    even->next=t;
                    even=even->next;
                }
            }
            temp=temp->next;
        }
        if(flag==1) e_flag=1;
        flag=0;
        temp=head;
        while(temp){
            if(temp->data%2!=0){
                Node* t=new Node(temp->data);
                if(flag==0){
                    odd=t;
                    odd_t=t;
                    flag=1;
                }
                else{
                    odd->next=t;
                    odd=odd->next;
                }
            }
            temp=temp->next;
        }
        if(flag==1) o_flag=1;
        
        if(!e_flag) return odd_t;
        if(!o_flag) return even_t;
        
        even->next=odd_t;
        
        return even_t;
        
    }
};