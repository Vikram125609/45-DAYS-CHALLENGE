class Solution {
public:
    ListNode * createList(ListNode * head,int value)
    {
        ListNode * ptr = head;
        if(ptr == NULL)
        {
            ListNode * temp = new ListNode(value);
            return temp;
        }
        else
        {
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new ListNode(value);
        }
        return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> sortedList;
        ListNode * ptr1 = list1;
        ListNode * ptr2 = list2;
        while(ptr1 != NULL && ptr2 != NULL)
        {
            if(ptr1->val <= ptr2->val)
            {
                sortedList.push_back(ptr1->val);
                ptr1 = ptr1->next;
            }
            else
            {
                sortedList.push_back(ptr2->val);
                ptr2 = ptr2->next;
            }
        }
        while(ptr1 != NULL)
        {
            sortedList.push_back(ptr1->val);
            ptr1 = ptr1->next;
        }
        while(ptr2 != NULL)
        {
            sortedList.push_back(ptr2->val);
            ptr2 = ptr2->next;
        }
        ListNode * head = NULL;
        for(int i=0;i<sortedList.size();i++)
        {
            head = createList(head,sortedList[i]);
        }
        return head;
    }
};