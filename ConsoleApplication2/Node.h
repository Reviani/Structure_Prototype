#pragma once

#include <iostream>
#include <string>   

//template<class T>
class Node
{
	
public:
	Node();
	Node(int item);
	Node*  InsertNode(Node *root, int key);
	Node*  CreateNode(int key);
	int key;
	std::string thing;
	Node *left, *right;
	
	//T data;
};

