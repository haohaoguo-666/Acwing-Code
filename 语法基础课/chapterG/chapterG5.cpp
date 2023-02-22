#define _CRT_SECURE_NO_WARNINGS 1
//合并两个排序的链表
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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* cow = head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                cow->next = l1;
                l1 = l1->next;
            }
            else {
                cow->next = l2;
                l2 = l2->next;
            }
            cow = cow->next;

        }
        cow->next = (l1 != NULL ? l1 : l2);
        return head->next;

    }
};