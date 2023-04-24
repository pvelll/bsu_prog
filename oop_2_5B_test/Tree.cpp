#include "Tree.h"



Tree::Tree()
{
    root = nullptr;
}

Tree::~Tree()
{
    destroy_tree(root);
}

Tree::Tree(Tree& other)
{
    if (this != &other) {
        root = other.root;
        other.root = nullptr;
    }
}

Tree::Tree(Tree&& other) noexcept
{
    if (this != &other) {
        root = other.root;
        other.root = nullptr;
    }
}

Tree& Tree::operator=(Tree& other)
{
    if (this != &other) {
        root = other.root;
        other.root = nullptr;
    }
    return *this;
}

Tree& Tree::operator=(Tree&& other) noexcept
{
    if (this != &other) {
        root = other.root;
        other.root = nullptr;
    }
    return *this;
}

void Tree::insert(int value)
{
    Node* newNode = new Node(value);

    if (root == nullptr) {
        root = newNode;
        return;
    }

    Node* current = root;
    while (true) {
        if (value < current->data) {
            if (current->left == nullptr) {
                current->left = newNode;
                break;
            }
            current = current->left;
        }
        else {
            if (current->right == nullptr) {
                current->right = newNode;
                break;
            }
            current = current->right;
        }
    }
}

void Tree::printLevel(Node* node, int level)
{
    if (node == nullptr) {
        return;
    }
    if (level == 1) {
        cout << node->data << " ";
    }
    else if (level > 1) {
        printLevel(node->left, level - 1);
        printLevel(node->right, level - 1);
    }
}

void Tree::printLevelOrder(int level)
{
    printLevel(root, level);
}

int& Tree::operator[](const int index)
{
    int counter = 0;
    Node* current = this->root;
    while (current != nullptr)
    {
        if (counter == index)
        {
            return current->data;
        }
        current = current->left;
        counter++;
    }
}

void Tree::destroy_tree(Node* node)

{
    if (node != nullptr) {
        destroy_tree(node->left);
        destroy_tree(node->right);
        delete node;
    }
}
Tree::Node::Node(int value)
{
    data = value;
    left = nullptr;
    right = nullptr;
}
