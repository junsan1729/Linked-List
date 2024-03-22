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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // create dummy node 
        ListNode* d = new ListNode(0);
        ListNode* t = d;

        // till both linked list are not empty
        // take smaller one and link to that
        // traverse that linked list 
        // traverse t pointer 
        while(l1 && l2){
            if(l1->val < l2->val){
                t->next = l1;
                l1 = l1->next;
            }
            else{
                t->next = l2;
                l2 = l2->next;
            }
            t = t->next;
        }

        // if l1 is non empty, link t to l1
        if(l1)
            t->next = l1;

        if(l2)

        // if l2 is non empty, link t to l2
            t->next = l2;

        // return the next of d as the head of merged linked list
        return d->next;            
    }
};
