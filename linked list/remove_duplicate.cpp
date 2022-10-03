/*
https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1
*/

class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(!head || !head->next) return head;
     unordered_set<int>s;
     Node* temp=head;
     s.insert(temp->data);
     while(temp && temp->next){
         if(s.find(temp->next->data)!=s.end()){
             temp->next = temp->next->next;
         }
         else{
              temp = temp->next;
              s.insert(temp->data);
          }
     }
     return head;
    }
};