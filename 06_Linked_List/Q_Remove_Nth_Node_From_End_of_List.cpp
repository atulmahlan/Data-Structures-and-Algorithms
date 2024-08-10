// QUESTION: Given the head of a linked list, remove the nth node from the end of the list and return its head.


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
    ListNode* removeNthFromEnd(ListNode* head, int K) {
        ListNode* fast = head;

        for(int i = 0; i<K ; i++)
        {
            fast = fast->next;
        }

        ListNode* slow = head;
        if(fast == NULL)
        {
            ListNode* delNode = head;
            head = head->next;
            delete delNode;
            return head;
        }

        while(fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};
