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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = new ListNode(-1);
        ListNode *even = new ListNode(-1);
        ListNode *odd_curr = odd;
        ListNode *even_curr = even;
        ListNode *curr = head;
        int i = 1;
        while(curr != NULL){
            if(i%2==1){
                ListNode *node = new ListNode(curr->val);
                odd_curr->next = node;
                odd_curr = odd_curr->next;
            }
            else{
                ListNode *node = new ListNode(curr->val);
                even_curr->next = node;
                even_curr = even_curr->next;
            }
            curr = curr->next;
            i++;
        }
        // even_curr->next = NULL;
        odd_curr->next = even->next;
        return odd->next;
    }
};