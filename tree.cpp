#include "tree.h"
#include <stack>

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
	//call the node version of this to do things.
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
			cout << temp->getData() << endl;
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

int Tree::depth(int find)
{
    //always go left unless you must go right
    return 0;
}

int Tree::breadth(int find)
{
    // level counter, math to figure out how many nodes you have visited per level, and how many there should be
    //this will only work if the tree is balanced.
    //fuck.
    return 0;
}
