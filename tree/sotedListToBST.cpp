#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    ListNode *mid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = head;
        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        if (prev != NULL)
            prev->next = NULL;
        return slow;
    }
    TreeNode *sortedListToBST(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        ListNode *midNode = mid(head);
        TreeNode *root = new TreeNode(midNode->val);
        if (head == midNode)
            return root;
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(midNode->next);
        return root;
    }
};