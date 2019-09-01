#include <iostream>

using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return NULL;

        ListNode *cur = head;
        ListNode *prev = NULL, *next = NULL;

        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    ListNode *l;
    l->next->val = 1;
    l->next->val->next->val = 2;
    l->next->val->next->val->next->val = 3;
    l->next->val->next->val->next->val->next->val = 4;
    s.reverseList(l);
    return 0;
}
