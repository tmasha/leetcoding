class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        int carry = 0;

        while (l1 || l2 || carry) {
            
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            curr->next = new ListNode(sum % 10);

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
            curr = curr->next;

        }
        
        ListNode* result = head->next;
        delete head;
        return result;

    }
};