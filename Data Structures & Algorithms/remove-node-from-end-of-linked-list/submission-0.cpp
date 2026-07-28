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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head);

        ListNode* it = head;
        int size = 0;

        while (it != nullptr) {
            size++;
            it = it->next;
        }

        int index = size - n;

        it = &dummy;

        for (int i = 0; i < index; i++) {
            it = it->next;
        }

        ListNode* removed = it->next;
        it->next = removed->next;
        delete removed;

        return dummy.next;
    }
};
