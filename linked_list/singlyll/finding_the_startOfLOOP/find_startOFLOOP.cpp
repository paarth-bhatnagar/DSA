//   Definition for singly-linked list
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *f = head, *s = head;
        while (f != nullptr && f->next != nullptr)
        {
            s = s->next;
            f = f->next->next;
            if (s == f)
            {
                s = head;
                while (s != f)
                {
                    s = s->next;
                    f = f->next;
                }
                return f;
            }
        }
        return nullptr;
    }
};