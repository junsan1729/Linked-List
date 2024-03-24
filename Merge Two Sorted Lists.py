# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        // create dummy node and tail to siginify end of the linked list 
        dummy_node = ListNode()
        tail =  dummy_node

        // while list1 and list2 are non empty 
        // take smaller one, link tail to it and traverse that linked list and tail also 
        while list1 is not None and list2 is not None :
            if list1.val < list2.val:
                tail.next = list1
                list1 = list1.next
            else:
                tail.next = list2
                list2 = list2.next
                
            tail = tail.next

        // if anyone of the linked list is empty, 
        // link tail to it 
        if list2 is not None:
            tail.next = list2

        if list1 is not None:
            tail.next = list1

        // return the next of dummy node
        return dummy_node.next            
                
