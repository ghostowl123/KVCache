#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H

enum Color { RED, BLACK };

class Node {
public:
    int value;
    Color color;
    Node *left, *right, *parent;

    Node(int value) : value(value), color(RED), left(nullptr), 
                      right(nullptr), parent(nullptr) {}
};

class RedBlackTree {
private:
    Node* root;

    void leftRotate(Node* x);
    void rightRotate(Node* x);
    void fixInsert(Node* k);
    void transplant(Node* u, Node* v);
    Node* minimum(Node* node);
    void fixDelete(Node* x);

public:
    RedBlackTree() : root(nullptr) {}
    void insert(int value);
    void remove(int value);
    bool search(int value);
    void inorderTraversal();
    
private:
    void inorderHelper(Node* node);
};

#endif