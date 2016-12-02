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
		Node *left;
		Node *right;
		int data;
	public:
		Node();
		Node(int likeit);
		~Node();
		void setData(int gimme);

		Node* getLeft();
		Node* getRight();
		int getData();
		void setLeft(Node* give);
		void setRight(Node* give);
		void print();
	};

Node *root;
void fillTree(vector<int> gimme);

public:
	Tree();
	~Tree();
	Tree(vector<int> gimme);

	Node* getRoot();
	void setRoot(Node* give);
	void print();
	int depth(int find);
	int breadth(int find);




};
