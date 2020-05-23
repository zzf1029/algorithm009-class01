/*
 *将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

https://leetcode-cn.com/problems/merge-two-sorted-lists/
 *
 * /
 */


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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode;
        ListNode* tail = dummy;

        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val < l2->val)
            {
                tail->next = new ListNode(l1->val);
                l1 = l1->next;
                tail = tail->next;
            }
            else
            {
                tail->next = new ListNode(l2->val);
                l2 = l2->next;
                tail = tail->next;
            }
        }

        while(l1 != NULL)
        {
            tail->next = new ListNode(l1->val);
            l1 = l1->next;
            tail = tail->next;
        }

        while(l2 != NULL)
        {
           tail->next = new ListNode(l2->val);
            l2 = l2->next;
            tail = tail->next;
        }

        return dummy->next;
    }
};
