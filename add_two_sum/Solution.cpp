#include <stdio.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        ListNode *head = NULL;
        ListNode *tail = NULL;
        ListNode *iter_l1=l1;
        ListNode *iter_l2=l2;
        int a=0;
        int b=0;
        int carry=0;
        while(iter_l1 != NULL || iter_l2 != NULL || carry != 0)
        {
           if (iter_l1 == NULL)
                a=0;
                
           else
                a=iter_l1->val;
           if (iter_l2 == NULL)
                b=0;
           else
                b=iter_l2->val;
            int md=0;
            if(carry == 1)
            {
                carry = (a+b+1) / 10;
                md = (a+b+1)%10;
            }
            else
            {
                carry = (a+b) / 10;
                md = (a+b)%10;
            }
            ListNode *tmp = new ListNode(md);
            if(head == NULL)
            {
                head = tmp;
                tail = tmp;   
            }
            else
            {
                tail->next = tmp;
                tail = tail->next;
            }
            if(iter_l1 == NULL)
                iter_l1 = NULL;
            else
                iter_l1 =iter_l1->next; 
            if(iter_l2 == NULL)
                iter_l2 = NULL;
            else
                iter_l2 = iter_l2->next; 
        }
        return head;
    }
};

int main()
{
    Solution p;
    ListNode * a = new ListNode(9);
    ListNode * b = new ListNode(1);
    ListNode * c = b;
    for(int i=0;i<9;i++)
    {
        ListNode * tmp = new ListNode(9);
        c->next = tmp;
        c = c->next;
    }
    p.addTwoNumbers(a,b);
}
