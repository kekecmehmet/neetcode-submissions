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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr or head->next == nullptr) return head;
        ListNode *cur = head, *next= head->next, *prev = nullptr;

        while (cur != nullptr) {
            cur->next = prev;
            prev = cur;
            cur = next;

            if (next != nullptr)
                next = next->next;
        }

        return prev;
    }
};
