class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != 0)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tmp = head;
        int sz = size(head) / 2;
        for (int i = 1; i <= sz; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};