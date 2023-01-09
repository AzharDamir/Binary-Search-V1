#pragma once
#include "Node.h"
#define SPACE 10
#include <vector>
class BST
{
public:
	Node* root;

	BST();
	void insertNode(Node* newnode);
	bool isTreeEmpty();
	void print2D(Node* r, int space);
	Node* search( int val);
	
};

