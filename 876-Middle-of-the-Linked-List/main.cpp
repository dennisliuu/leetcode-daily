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
    ListNode *middleNode(ListNode *head)
    {
        struct ListNode *slow_ptr = head;
        struct ListNode *fast_ptr = head;

        while (head != NULL && (fast_ptr != NULL && fast_ptr->next != NULL))
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        return slow_ptr;
    }
};

struct ListNode *head = NULL;
void insert(int new_data)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = new_data;
    new_node->next = head;
    head = new_node;
}

void display()
{
    struct ListNode *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}

int main(void)
{
    Solution s;

    insert(4);
    insert(1);
    insert(5);
    // insert(3);
    insert(3);

    struct ListNode *ptr;
    ptr = head;
    ptr = s.middleNode(ptr);
    cout << ptr->val << endl;
    display();

    return 0;
}
