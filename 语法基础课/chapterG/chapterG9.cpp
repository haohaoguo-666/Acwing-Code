#define _CRT_SECURE_NO_WARNINGS 1
//两个链表的第一个公共结点
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
    ListNode* findFirstCommonNode(ListNode* headA, ListNode* headB) {
        int LA = 0, LB = 0, k = 0;
        auto q = headB;
        auto p = headA;
        for (auto A = headA; A; A = A->next)LA++;
        for (auto A = headB; A; A = A->next)LB++;
        if (LB > LA) {
            q = headB;
            p = headA;
            k = LB - LA;
        }
        else {
            q = headA;
            p = headB;
            k = LA - LB;
        }
        while (k--) {
            q = q->next;
        }
        while (p) {
            if (p == q)return p;
            p = p->next;
            q = q->next;
        }
        return NULL;
    }
};