#define _CRT_SECURE_NO_WARNINGS 1
//ɾ���������ظ��Ľڵ�
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
            //�����һ������ֵ�ǲ��ظ���
            if (p->next == q) {
                p = q;
            }
            //�����һ������ֵ���ظ���
            else {
                p->next = q->next;
            }
        }
        return newhead->next;


    }
};