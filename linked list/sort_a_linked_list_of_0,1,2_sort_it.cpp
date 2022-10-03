/*
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
*/

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(!head) return nullptr;
        Node* head0=nullptr; Node*temp0=nullptr;
        Node* head1=nullptr; Node*temp1=nullptr;
        Node* head2=nullptr; Node*temp2=nullptr;
        int count0=0;
        int count1=0;
        int count2=0;
        while(head){
            if(head->data==0) count0++;
            if(head->data==1) count1++;
            if(head->data==2) count2++;
            head=head->next;
        }
        
        if(count0>0){
            int flag=0;
            int count=count0;
            while(count!=0){
                Node* t=new Node(0);
                if(flag==0){
                    head0=t;
                    temp0=t;
                    flag=1;
                }
                else{
                temp0->next=t;
                temp0=temp0->next;
                }
                count--;
            }
        }
        if(count1>0){
            int flag=0;
            int count=count1;
            while(count!=0){
                Node* t=new Node(1);
                if(flag==0){
                    head1=t;
                    temp1=t;
                    flag=1;
                }
                else{
                temp1->next=t;
                temp1=temp1->next;
                }
                count--;
            }
        }
        if(count2>0){
            int flag=0;
            int count=count2;
            while(count!=0){
                Node* t=new Node(2);
                if(flag==0){
                    head2=t;
                    temp2=t;
                    flag=1;
                }
                else{
                temp2->next=t;
                temp2=temp2->next;
                }
                count--;
            }
        }
        if(count0>0){
            if(count1>0 && count2>0) { temp0->next=head1; temp1->next=head2; }
            if(count1==0 && count2>0) { temp0->next=head2; }
            if(count1>0 && count2==0) { temp0->next=head1; }
            return head0;
        } 
        if(count1>0){
            if(count0==0 && count2>0) { temp1->next=head2;}
            return head1;
        }
        else return head2;
    }
};