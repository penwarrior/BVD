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


void Tree::Node::print(int depth /* = 0 */)
{
	for (int i = 0; i < depth; ++i)
		cout << " ";

	if (left) {
		left->print(depth - 1);
	}
	if (right) {
		right->print(depth + 1);
	}
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

Tree::Tree(vector use)
{
	root = new Node;
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
	if (root) {
		root->print(20);
	}
}



void Tree::fillTree(vector use)//this will take a vector
{

for(int i = 0; i < use.size(); ++i)
{
	if(root == nullptr)
	{
		root = new Node(use[i]);
		continue;
	}

	Node *temp = root;

	while(true)
	{
		if(use[i] < temp.getData())
		{
			if(temp.getLeft() == nullptr)
			{
				temp.setLeft(new Node(use[i]));
				break;
			}
			else
			{
				temp = temp.getLeft();
			}
		}
		else if(use[i] >= temp.getData())
		{
			if(temp.getRight() == nullptr)
			{
				temp.setRight(new Node(use[i]));
				break;
			}
			else
			{
				temp = temp.getRight();
			}
		}

	}
}





}

int Tree::depth(int find)
{
	 //always go left unless you must go right

}

int Tree::breadth(int find)
{
// level counter, math to figure out how many nodes you have visited per level, and how many there should be
//fuck.
}
