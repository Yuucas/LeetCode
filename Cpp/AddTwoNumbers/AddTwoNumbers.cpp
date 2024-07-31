class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1;
        ListNode* p2;
        ListNode* root;
        ListNode* p;
        int addOne = 0;
        int temp;
        
        temp = l1->val + l2->val + addOne;
        root = new ListNode(temp%10);
        addOne = temp/10;
        
        p1 = l1->next;
        p2 = l2->next;
        p  = root;
        while(p1 || p2)
        {
            if(p1 == NULL)
            {
                while(p2)
                {
                    temp = p2->val + addOne;
                    p->next = new ListNode(temp%10);
                    p = p->next;
                    p2 = p2->next;
                    addOne = temp/10;
                }
                break;
            }
            
            else if(p2 == NULL)
            {
                while(p1)
                {
                    temp = p1->val + addOne;
                    p->next = new ListNode(temp%10);
                    p = p->next;
                    p1 = p1->next;
                    addOne = temp/10;
                }
                break;
            }
            
            else
            {
                temp = p1->val + p2->val + addOne;
                p->next = new ListNode(temp%10);
                p = p->next;
                p1 = p1->next;
                p2 = p2->next;
                addOne = temp/10;
            }
        }
        
        if(addOne == 1)
        {
            p->next = new ListNode(1);
        }
            
        return root;
    }
};
