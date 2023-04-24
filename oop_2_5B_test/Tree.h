#pragma once
#include <iostream>
using namespace std;


class Tree {
private:
    class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value);
    };
public:
    Node* root;
    Tree();
    ~Tree();
    Tree(Tree& other);
    Tree(Tree&& other) noexcept;
    Tree& operator=(Tree& other);
    Tree& operator=(Tree&& other) noexcept;
    void insert(int value);
    void printLevel(Node* node, int level);
    void printLevelOrder(int level);
    int& operator[](const int index);
private:
    void destroy_tree(Node* node);

};


