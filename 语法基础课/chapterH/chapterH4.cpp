#define _CRT_SECURE_NO_WARNINGS 1
//��β��ͷ��ӡ���� 
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
    vector<int> printListReversingly(ListNode* head) {
        vector<int> array;
        while (head) {
            array.push_back(head->val);
            head = head->next;
        }
        reverse(array.begin(), array.end());
        return array;
    }
};

