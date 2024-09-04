/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newnode = new ListNode(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }
    void reverse(ListNode *&nhead, ListNode *current)
    {
        if (current->next == NULL)
        {
            nhead = current;
            return;
        }

        reverse(nhead, current->next);
        current->next->next = current;
        current->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *nhead = NULL;
        ListNode *ntail = NULL;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            insert_tail(nhead, ntail, tmp->val);
            tmp = tmp->next;
        }
        reverse(nhead, nhead);
        ListNode *tmp2 = nhead;
        tmp = head;
        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
                return false;
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};