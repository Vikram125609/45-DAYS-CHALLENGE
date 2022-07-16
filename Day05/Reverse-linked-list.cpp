class Solution {
public:
    ListNode* ans;
    int i = 0;
    ListNode* reverse(ListNode* prev,ListNode* curr,ListNode* next)
    {
        if(next == NULL)
        {
            return NULL;
        }
        reverse(curr,next,next->next);
        if(i == 0)
        {
            ans = curr->next;
            ans->next = curr;
            i++;
        }
        curr->next = prev;
        return ans;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }
        if(head->next == NULL)
        {
            return head;
        }
        return reverse(NULL,head,head->next);
    }
};