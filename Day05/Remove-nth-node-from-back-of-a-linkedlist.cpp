class Solution {
public:
    int length(ListNode * head)
    {
        ListNode * pointer = head;
        int len = 0;
        while(pointer != NULL)
        {
            pointer = pointer->next;
            len++;
        }
        return len;
    }
    ListNode* newLinkedList(ListNode* head,int position)
    {
        int i = 0;
        ListNode* prevPointer = NULL;
        ListNode* currPointer = head;
        if(i == position)
        {
            prevPointer = currPointer->next;
            delete(currPointer);
            return prevPointer;
        }
        while (i < position)
        {
            prevPointer = currPointer;
            currPointer = currPointer->next;
            i++;
        }
        prevPointer->next = currPointer->next;
        delete(currPointer);
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        int position = len - n;
        if(len == 1)
        {
            return NULL;
        }
        return newLinkedList(head,position);
    }
};