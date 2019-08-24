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

struct ListNode *head = NULL;
void insert(int new_data)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = new_data;
    new_node->next = head;
    head = new_node;
}

void display() { 
   struct ListNode* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->val <<" "; 
      ptr = ptr->next; 
   } 
} 

int main(void)
{
    Solution s;

    insert(4);
    insert(1);
    insert(5);
    insert(3);
    
    struct ListNode* ptr;
    ptr = head;

    while (ptr->next != NULL)
    {
        if (ptr->val == 5)
        {
            s.deleteNode(ptr);
        }
        else
            ptr = ptr->next;
    }

    display();

    return 0;
}
