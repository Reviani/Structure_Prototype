#include <iostream>
#include <string>
#include "BinaryTreeTestObject.h"
#include "Node.h" 

using namespace std;
/*

Make a binary tree add a node
Make a tree add to a child if possible

Otherwise go down a root (based on greater or less than) to a point where there isn't a node

*/


	BinaryTreeTestObject::BinaryTreeTestObject() { // Constructor
	//Doeasn't quite work with node system
		DebugTest();
		TestNum = 0;
		CurrentNode = new Node(TestNum);
		
	}

	BinaryTreeTestObject::~BinaryTreeTestObject() {  // DEstructor
		cout << "Removing this object. \n";
	}

	BinaryTreeTestObject::BinaryTreeTestObject(int NumTest) { // Overloaded Constructor with num
		
		// Lets have this use and revice a pointer as well
		cout << "Number " << NumTest << " Received \n";
		TestNum = NumTest;
		 CurrentNode = new Node(TestNum);
	}

	void BinaryTreeTestObject::DebugTest() { // debug test
		cout << "Object Reached, did you use the debugger? \n";
	}

	void  BinaryTreeTestObject::PointerTest(int *test) {
		cout << "Pointer value " << *test << " Received \n";
		cout << "Pointer adress " << test << " Received \n";

		*test = TestNum;
	}

	//A structure varible, made mostly to test it out. Renamed to not be mistaken with node object
	struct B_node
	{
		int data;
		struct B_node *left;
		struct B_node *right;
	} ThisNode;

	void BinaryTreeTestObject::AddNode(int InputData)
	{
		/*
		Check if current node has any data

		If Node is null;
		Put the Data into the node and end
			Else
		If value node is higher than data, 
		Check right child, repeat steps
		Otherwise, check Left child and repeat
		*/
		 

		 Node* root = CurrentNode->InsertNode(CurrentNode, InputData);

		/**
		//Note; this  function does not look for duplicates
		if (ThisNode.data == NULL) {
			ThisNode.data = InputData;
		}
		else {
			//This point forward runs into null structures, maybe concider using the class nodes?
			if (ThisNode.data < InputData) {
				if(ThisNode.right != NULL)
				AddNode(ThisNode.right->data);
				else
					cout << " No Right node! \n";
			}
			else {
				if (ThisNode.right != NULL)
				AddNode(ThisNode.left->data);
				else
					cout << " No Left node! \n";
			}
		}

		*/
	}

	void BinaryTreeTestObject::RemoveNode(int Data)
	{
		/*
		
		removeing a node without children is easy, but what about one with multipule children?
		Or worse, Sets of children?
		Maybe get the min and then place it in the place, would mess with sorting...

		*/
	}



	int TestNum;

