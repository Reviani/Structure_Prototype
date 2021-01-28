#pragma once

#include <iostream>
#include <string>   

//template<class T>
class Node
{
	
public:
	Node();
	Node(int item);
	void InsertItem(Node NewNode, int key, std::string value);
	int key;
	std::string thing;
	Node *left, *right;
	
	//T data;
};

