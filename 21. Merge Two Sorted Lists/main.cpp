#include <iostream>

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (!l1 || !l2)
            return l1 ? l1 : l2;
        if (l1->val < l2->val)
        {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    ListNode *l1;
    ListNode *l2;
    ListNode *out;

    l1->val = 1;
    l1->next->val = 2;
    l1->next->next->val = 4;
    l2->val = 1;
    l2->next->val = 3;
    l2->next->next->val = 4;

    out = s.mergeTwoLists(l1, l2);

    return 0;
}
