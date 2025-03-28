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
void Outer_left(Node *root)
{
    if (!root->left && !root->right)
        cout << root->val << " ";
    if (!root || !root->left && !root->right)
        return;

    if (root->left)
        Outer_left(root->left);
    else
        Outer_left(root->right);

    cout << root->val << " ";
}
void Outer_right(Node *root)
{
    if (!root->left && !root->right)
        cout << root->val << " ";
    if (!root || !root->right && !root->left)
        return;
    cout << root->val << " ";
    if (root->right)
        Outer_right(root->right);
    else
        Outer_right(root->left);
}
int main()
{
    Node *root = input_tree();
    if (root->left)
        Outer_left(root->left);
    cout << root->val << " ";
    if (root->right)
        Outer_right(root->right);
    return 0;
}