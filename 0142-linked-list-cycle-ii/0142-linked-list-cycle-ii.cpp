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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL){     //Step-1: detecting if there is a loop
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast){          //yes, there is a loop
                slow = head;            //Put either slow or fast at head
                while (slow != fast){   //until they don't collide,
                    slow = slow->next;  //move both by 1 place.
                    fast = fast->next;
                }
                return slow;            //Second time, collision point will be the start of loop
            }
        }
        return NULL;
    }
};