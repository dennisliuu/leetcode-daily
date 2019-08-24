#include <iostream>
#include <vector>

using namespace std;

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
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main(void)
{
    Solution s;
    vector<int> vect;
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(1);
    vect.push_back(9);
    
    // vector<int> ans = s.deleteNode(ListNode(5));

    // for (auto i = ans.begin(); i != ans.end(); ++i)
    //     std::cout << *i << ' ';

    return 0;
}
