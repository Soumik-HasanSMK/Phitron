#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *x = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        x->left = left;
        x->right = right;
        if (x->left)
            q.push(x->left);
        if (x->right)
            q.push(x->right);
    }
    return root;
}
vector<int> get_leaf(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    vector<int> v;
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        if (!p->left && !p->right)
        {
            v.push_back(p->val);
        }
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    sort(v.begin(), v.end(), greater<int>()); // descending order sort of a vector.
    return v;
}
int main()
{
    Node *root = input_tree();
    vector<int> leaf = get_leaf(root);
    for (int data : leaf)
        cout << data << " ";
    return 0;
}