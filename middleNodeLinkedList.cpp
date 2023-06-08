#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * temp = head;
        if(head == NULL) return NULL;
        if(head->next == NULL) {
            delete head;
            return NULL;
        }
        while(fast != NULL && fast->next != NULL)
        {
            if(slow != head) temp = temp->next;
            fast = fast->next->next;
            slow = slow->next;
            // temp = temp->next;
        }
        temp->next = slow->next;
        return head;
    }
};