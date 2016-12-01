#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Tree
{
private:

	class Node
	{
	private:
		Node *root;
		Node *left;
		Node *right;
		int data;
	public:
		Node();
		~Node();
		void setData(char gimme);

		Node* getLeft();
		Node* getRight();
		int getData();
		void setLeft(Node* give);
		void setRight(Node* give);
		void print(int depth = 0);
	};


public:
	Tree();
	~Tree();
	Tree(); // this is going to need a vector in it somehow

	Node* getRoot();
	void setRoot(Node* give);
	void fillTree(string postEq);
	void print();
	int depth(int find);
	int breadth(int find);




};
