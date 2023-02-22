#define _CRT_SECURE_NO_WARNINGS 1
//·´×ªÁ´±í
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* p = head;
        ListNode* q = p->next;
        while (q) {
            ListNode* c = q->next;
            q->next = p;
            p = q;
            q = c;
        }
        head->next = NULL;
        return p;


    }
};