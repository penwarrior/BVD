#include "tree.h"
#include <stack>

int g_DepthCompCount = 0;
int g_BreadthCompCount = 0;

// Node items

Tree::Node*
Tree::Node::getLeft()
{
    return left;
}

Tree::Node*
Tree::Node::getRight()
{
    return right;
}

int Tree::Node::getData()
{
    return data;
}

void Tree::Node::setLeft(Node* give)
{
    left = give;
}

void Tree::Node::setRight(Node* give)
{
    right = give;
}

void Tree::Node::setData(int gimme)
{
    data = gimme;
}

Tree::Node::Node()
{
    left = nullptr;
    right = nullptr;
    data = 0;
}

Tree::Node::~Node()
{
}

Tree::Node::Node(int takeit)
{
    left = nullptr;
    right = nullptr;
    data = takeit;
}

void Tree::Node::print()
{
    cout << data << endl;

    if (getLeft() != nullptr) {
        getLeft()->print();
    }

    if (getRight() != nullptr) {
        getRight()->print();
    }
}

bool Tree::Node::depth(int find)
{
    ++g_DepthCompCount;

    if (data == find) {
        return true;
    }

    else {
        if (getLeft() != nullptr) {
            if (getLeft()->depth(find)) {
                return true;
            }
        }

        if (getRight() != nullptr) {
            if (getRight()->depth(find)) {
                return true;
            }
        }
    }

    return false;
}

bool Tree::Node::breadth(int find, queue<Node*>& que)
{
    ++g_BreadthCompCount;

    if (getData() == find) {
        return true;
    }

    if (getLeft() != nullptr) {
        que.push(getLeft());
    }

    if (getRight() != nullptr) {
        que.push(getRight());
    }

    return false;
}

// Tree items
Tree::Node*
Tree::getRoot()
{
    return root;
}

void Tree::setRoot(Node* give)
{
    root = give;
}

Tree::Tree(vector<int> use)
{
    root = nullptr;
    fillTree(use);
}

Tree::~Tree()
{
}

Tree::Tree()
{
    root = nullptr;
}

void Tree::print()
{
    root->print();
}

void Tree::fillTree(vector<int> use)
{

    for (unsigned int i = 0; i < use.size(); ++i) {
        if (root == nullptr) {
            root = new Node(use[i]);
            continue;
        }

        Node* temp = root;

        while (true) {
            if (use[i] < temp->getData()) {
                if (temp->getLeft() == nullptr) {
                    temp->setLeft(new Node(use[i]));
                    break;
                } else {
                    temp = temp->getLeft();
                }
            } else if (use[i] >= temp->getData()) {
                if (temp->getRight() == nullptr) {
                    temp->setRight(new Node(use[i]));
                    break;
                } else {
                    temp = temp->getRight();
                }
            }
        }
    }
}

bool Tree::depth(int find)
{
    g_DepthCompCount = 0;
    bool res = root->depth(find);
    return res;
}

bool Tree::breadth(int find)
{
    g_BreadthCompCount = 0;

    queue<Node*> por;
    por.push(root);

    bool res = false;
    while (!por.empty()) {
        Node* next = por.front();
        por.pop();
        if (next->breadth(find, por)) {
            res = true;
            break;
        }
    }

    return res;
}
