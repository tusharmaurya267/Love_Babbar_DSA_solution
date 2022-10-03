/*
https://leetcode.com/problems/linked-list-cycle/
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
      ListNode* temp=head;
      ListNode* slow=head;
      while(temp && temp->next){
        temp=temp->next->next;
        slow=slow->next;
        if(temp==slow) return true;
      }
      return false;
    }
};