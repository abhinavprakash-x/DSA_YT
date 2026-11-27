#include <iostream>
using namespace std;

class AVLNode {
public:
    int data;
    AVLNode* left;
    AVLNode* right;
    int height;

    AVLNode(int value) : data(value), left(nullptr), right(nullptr), height(1) {}
};

int getHeight(AVLNode* root)
{
    if (root == nullptr) return 0;
    return root->height;
}

AVLNode* rightRotate(AVLNode* root)
{
    AVLNode* child = root->left;
    AVLNode* T2 = child->right;

    child->right = root;
    root->left = T2;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
}

AVLNode* leftRotate(AVLNode* root)
{
    AVLNode* child = root->right;
    AVLNode* T2 = child->left;

    child->left = root;
    root->right = T2;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    child->height = 1 + max(getHeight(child->left), getHeight(child->right));

    return child;
}

AVLNode* insert(AVLNode* root, int key)
{
    if(root == nullptr) return new AVLNode(key);

    if(key < root->data) root->left = insert(root->left, key);
    else if(key > root->data) root->right = insert(root->right, key);
    else return root;

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int balance = getHeight(root->left) - getHeight(root->right);

    // Left Left Case
    if(balance > 1 && key < root->left->data)
        root = rightRotate(root);

    // Right Right Case
    else if(balance < -1 && key > root->right->data)
        root = leftRotate(root);

    // Left Right Case
    else if(balance > 1 && key > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    else if(balance < -1 && key < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preOrder(AVLNode* root)
{
    if(root != nullptr)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    AVLNode* root = nullptr;

    preOrder(root); cout << endl;
    root = insert(root, 10);
    preOrder(root); cout << endl;
    root = insert(root, 20);
    preOrder(root); cout << endl;
    root = insert(root, 30);
    preOrder(root); cout << endl;
    root = insert(root, 50);
    preOrder(root); cout << endl;
    root = insert(root, 70);
    preOrder(root); cout << endl;
    root = insert(root, 5);
    preOrder(root); cout << endl;
    root = insert(root, 100);
    preOrder(root); cout << endl;
    root = insert(root, 25);
    preOrder(root); cout << endl;
    root = insert(root, 35);
    preOrder(root); cout << endl;
    root = insert(root, 40);
    preOrder(root); cout << endl;
    root = insert(root, 6);
    preOrder(root); cout << endl;
    root = insert(root, 2);
    preOrder(root); cout << endl;
    root = insert(root, 1);
    preOrder(root); cout << endl;

    return 0;
}