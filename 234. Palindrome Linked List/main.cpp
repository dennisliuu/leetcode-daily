#include <vector>
#include <iostream>

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        std::vector<int> v = {};
        ListNode *ptr = head;
        while (ptr)
        {
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] != v[v.size() - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    ListNode *head;
    head->val = 1;
    head->next->val = 2;
    head->next->next->val = 2;
    head->next->next->next->val = 1;
    std::cout << s.isPalindrome(head) << std::endl;
    return 0;
}
