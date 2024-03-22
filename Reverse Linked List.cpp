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
        // pointers for relinking
        ListNode *p = nullptr, *c = head, *f;

        // link c to p and shift c to f and p to c
        while (c) {
            f = c->next;
            c->next = p;
            p = c;
            c = f;
        }

        // return p as its the last node of original linked list 
        // and thus first
        // node of reversed linked list
        return p;
    }
};
