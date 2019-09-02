//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == nullptr)
            return head;

        ListNode *temp = new ListNode(-1);
        temp->next = head;

        while (temp->next != nullptr)
        {
            if (temp->next->val == val)
            {
                if (head == temp->next)
                    head = head->next;
                temp->next = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};