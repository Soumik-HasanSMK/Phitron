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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *smk = head;
        while (smk->next != NULL)
        {
            if (smk->val == smk->next->val)
            {
                ListNode *deletenode = smk->next;
                smk->next = smk->next->next;
                delete deletenode;
            }
            if (smk->next == NULL)
                break;
            else if (smk->val != smk->next->val)
                smk = smk->next;
        }
        return head;
    }
};