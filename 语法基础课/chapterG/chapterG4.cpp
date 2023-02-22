#define _CRT_SECURE_NO_WARNINGS 1
//在O(1)时间删除链表结点
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