/*
https://practice.geeksforgeeks.org/problems/linked-list-in-zig-zag-fashion/1
*/

class Solution
{
    public:
    Node *zigZag(Node* head)
    {
       Node* temp= head;
       bool flag= true;
       while(temp && temp->next){
           if(flag==true){
               if(temp->data > temp->next->data){
                   int temp2=temp->data;
                   temp->data=temp->next->data;
                   temp->next->data=temp2;
               }
               flag=false;
           }
           else if(flag==false){
               if(temp->data < temp->next->data){
                   int temp2=temp->data;
                   temp->data=temp->next->data;
                   temp->next->data=temp2;
               }
               flag=true;
           }
           temp=temp->next;
           
       }
       return head;
    }
};