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
int height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l, r) + 1;
}
bool perfect_or_not(Node *root)
{
    if (root == NULL) // tree empty hoile perfect;
        return true;
    int l = height(root->left);
    int r = height(root->right);
    // 1. left subtree & right sub tree er height jodi soman na hoy tobe false retun korbo;
    // 2. left element & right element jokhon current root hobe, tokhon oder left 7 right
    // diye recursively function k call korbo; jodi perfect na hoy tobe false return korbo;
    // 3.ei condition gula na manle true return korbo;
    if (l != r) // 1. number idea;
        return false;
    if (!perfect_or_not(root->left) || !perfect_or_not(root->right)) // 2. recursive call
        return false;
    return true; // 3. number idea;
}
int main()
{
    Node *root = input_tree();
    bool ans = perfect_or_not(root);
    if (ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}