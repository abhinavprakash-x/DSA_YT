// Binary Trees and Some Basic Operations
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
  public:
    int data;
    Node *l, *r;

    Node() : data(0), l(nullptr), r(nullptr) {}
    Node(int x) : data(x), l(nullptr), r(nullptr) {}
};

void traverse_bfs(Node *root)
{
    if(!root) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        if(q.front()->l != nullptr) q.push(q.front()->l);
        if(q.front()->r != nullptr) q.push(q.front()->r);

        cout << q.front()->data << " ";
        q.pop();
    }
}

void traverse_dfs_stack(Node *root)
{
    if(!root) return;
    stack<Node*> st;
    st.push(root);

    while(!st.empty())
    {
        Node *curr = st.top();
        st.pop();

        cout << curr->data << " ";

        if(curr->r) st.push(curr->r);
        if(curr->l) st.push(curr->l);
    }
}

void traverse_dfs_recurse(Node *root)
{
    if(!root) return;

    cout << root->data << " ";
    traverse_dfs_recurse(root->l);
    traverse_dfs_recurse(root->r);
}

void inorder(Node *root)
{
    if(!root) return;

    inorder(root->l);
    cout << root->data << " ";
    inorder(root->r);
}

void preorder(Node *root)
{
    if(!root) return;

    cout << root->data << " ";
    preorder(root->l);
    preorder(root->r);
}

void postorder(Node *root)
{
    if(!root) return;

    cout << root->data << " ";
    postorder(root->l);
    postorder(root->r);
}

int main()
{
    Node* root = new Node(1);

    root->l = new Node(2);
    root->r = new Node(3);

    root->l->l = new Node(4);
    root->r->l = new Node(5);
    root->r->r = new Node(6);

    root->r->l->l = new Node(7);

    traverse_bfs(root); cout << endl;
    traverse_dfs_recurse(root); cout << endl;
    traverse_dfs_stack(root); cout << endl;

    inorder(root); cout << endl;
    preorder(root); cout << endl;
    postorder(root); cout << endl;

    return 0;
}