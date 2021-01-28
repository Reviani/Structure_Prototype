#pragma once

#ifndef BinaryTreeTestObject_H
#define BinaryTreeTestObject_H

#include <iostream>
#include <string>
#include "Node.h" 
using namespace std;

class BinaryTreeTestObject
{
public:
	BinaryTreeTestObject();
	~BinaryTreeTestObject();
	BinaryTreeTestObject(int TestNum);
	void DebugTest();
	void PointerTest( int *test);
	void AddNode(int Data);
	void RemoveNode(int Data);
	struct B_node;
	Node CurrentNode;
	//B_node ThisNode;
private:
	int TestNum;
};

#endif // !1