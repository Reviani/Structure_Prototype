// LearningTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include <string>
#include "BinaryTreeTestObject.h"
#include "HashTable.h"
#include "ListManager.h"
#include "Node.h"

using namespace std;

void SpaceInConsole();
void TestApp();
void BinaryTest();
void MergeSortTest();

//template<class T>

BinaryTreeTestObject TestTree_1;
BinaryTreeTestObject TestTree_2(3);
ListManager<int> ListTest;
HashTable TestHashing;


int main()
{
	// Remember to move this to a newa and updated project 
	// maybe in a app or something
	// future me talking, this didn't end well for now work on concole app
	/*
	Plan is to make a menu tthat connects to each project part that we used to review and pratice best coding mesures and data structures
	Things to work on:
	*pointers
	linked lists/ vectors (add in the proper <libary>)
	hash functions // How does 'Hash' work?
	search methods (merge sort, maybe quick sort)

	Functional Binary tree
	binary search
	Sorting methods

	Custom Hash Function
	 Graphs(advanced)
	 
	 whhats a nureal network again?
	*/
	
	//What was the way you organize varibles again? static, nonstatic, input driven, what?
	string temp;
	int test = 0;
	int *testPtr = &test;

	// Space between consructor and Hashing
SpaceInConsole();
	// Shows the result of the vector hash test
	TestHashing.vectorHashing();

	// gets input from user
	// cin >> temp;
	// cout << "Input received. \n";
SpaceInConsole();
	//Tests Pointers
	cout << "Number is " << test << " \n";
	TestTree_2.PointerTest(testPtr);
	cout << "Number is now " << test << " \n";
SpaceInConsole();
	// Tests merge sort
	MergeSortTest();
SpaceInConsole();
	//Tests adding a binary tree
	TestTree_1.AddNode(50);
	TestTree_1.AddNode(60);
	TestTree_1.AddNode(40);
SpaceInConsole();
	// This will eventualy respond to whats typed in, may wanna google it
	switch (test) {
	case 1:
		break;

	default:
		//cout << "Hello World! \n";
		TestTree_1.DebugTest();
	}

}

void SpaceInConsole() {
	cout << "\n";
}

void TestApp() {
	cout << "Debug and Method test! \n";
}

// Again taken from Geeks for geeks, slightly altered to work with objects. Doesn't detect node children
void BinaryTest() {
	/*create root*/
	 Node* root = new Node(1);
	/* following is the tree after above statement

			 1
			/ \
			NULL NULL
	*/

	root->left = new Node(2);
	root->right = new Node(3);
	/* 2 and 3 become left and right children of 1
					1
					/ \
				   2     3
				  / \    /  \
			   NULL NULL NULL NULL
	*/

	root->left->left = new Node(4);
	/* 4 becomes left child of 2
			   1
			/    \
			2     3
			/ \  / \
	 4 NULL NULL NULL
	/ \
	NULL NULL
	*/

//	return 0;
}

void MergeSortTest() {
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	ListTest.printArray(arr, arr_size);

	ListTest.GFGmergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	ListTest.printArray(arr, arr_size);
//	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
