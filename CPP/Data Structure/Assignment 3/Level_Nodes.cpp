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

void get_level(Node *root, int x)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int level; // loop er bahire condition apply ekhane declare korlam;
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        level = p.second;
        // level jodi search level er soman hoye jay tobe node er value print kot=rbo;
        // level ak somoy last level pornjoto pousabe,so tree er height paowa jabe;
        // jodi level search level er soman na hoy,loop er bahire check dibo
        // then invalid print korbo;
        if (level == x)
            cout << node->val << " ";
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    if (x > level) // invablid tokhoni hobe, tree er height er theke search level boro hobe;
        cout << "Invalid";
}
int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    get_level(root, x);
    return 0;
}