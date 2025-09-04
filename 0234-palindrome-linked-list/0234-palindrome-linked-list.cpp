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
    ListNode* reverseLinkedList(ListNode* head){
        if (head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseLinkedList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    };

    bool isPalindrome(ListNode* head) {
        //Part-1: finding out th middle, to find 1st half and 2nd half
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        //Part-2: reversing 2nd half
        ListNode* newHead = reverseLinkedList(slow->next);

        //Part-3: comparing
        ListNode* first = head;
        ListNode* second = newHead;
        while (second != NULL){
            if (first->val != second->val){
                reverseLinkedList(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLinkedList(newHead);
        return true;
    }
};