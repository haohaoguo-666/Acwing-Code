#define _CRT_SECURE_NO_WARNINGS 1
//删除链表中重复的节点
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
    ListNode* deleteDuplication(ListNode* head) {
        ListNode* newhead = new ListNode(-1);
        newhead->next = head;
        auto p = newhead;
        while (p->next) {
            auto q = p->next;
            while (q->next && p->next->val == q->next->val) {
                q = q->next;
            }
            //如果下一个结点的值是不重复的
            if (p->next == q) {
                p = q;
            }
            //如果下一个结点的值是重复的
            else {
                p->next = q->next;
            }
        }
        return newhead->next;


    }
};