#define _CRT_SECURE_NO_WARNINGS 1
//��O(1)ʱ��ɾ��������
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
    void deleteNode(ListNode* node) {
        auto* p = node->next;

        node->val = p->val;
        node->next = p->next;

        delete p;
    }
};