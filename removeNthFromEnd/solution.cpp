
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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int count = 0;
        ListNode *first=head;
        ListNode *second=head;
        for (;first != NULL;first=first->next) {
            count++ ;
            if (count > n ) {
                break;
            }
        }
        if (count < n) {
            return head;
        }
        if (count ==n ) {
            return head->next;
        }
        for (;first != NULL && first->next != NULL;first=first->next,second=second->next) {
            continue;    
        }
        ListNode *tmp = second->next->next;
        second->next=tmp;
        return head;
        
        
    }
};
