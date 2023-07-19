/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* right) {
        if (right == NULL || right->next == NULL) {
            return right;
        }
        ListNode* left = NULL;
        ListNode* tmp;
        while (right->next) {
            tmp = left;
            left = right;
            right = right->next;
            left->next = tmp;
        }
        right->next = left;
        return right;
    }
};
