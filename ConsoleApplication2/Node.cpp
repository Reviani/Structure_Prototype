#include "Node.h"
#include <iostream>
#include <string>  
#include <queue>

using namespace std;

Node::Node()
{
}

Node::Node(int item)
{
		key = item;
		left = right = nullptr;
	}

Node*  Node::InsertNode(Node *root, int key)
 {
	// If the tree is empty, assign new node address to root
	 if (root == NULL) {
		 root = CreateNode(key);
		 return root;  
	 }

	 
	 // Else, do level order traversal until we find an empty
	 // place, i.e. either left child or right child of some
	 // node is pointing to NULL. 
	 // Summary, the thing goes though all the tree until it finds a null, then returns that 
	 queue<Node*> q;
	 q.push(root);

	 while (!q.empty()) {
		 Node* temp = q.front();
		 q.pop();

		 if (temp->left != NULL)
			 q.push(temp->left);
		 else {
			 temp->left = CreateNode(key);
			 return root;
		 }

		 if (temp->right != NULL)
			 q.push(temp->right);
		 else {
			 temp->right = CreateNode(key);
			 return root;
		 }
	 }
 }

 Node*  Node::CreateNode(int key)
 { 
	 Node* newNode = new Node();
	 if (!newNode) {
		 cout << "Memory error\n";
		 return NULL;
	 }
	 newNode->key = key;
	 newNode->left = newNode->right = NULL;
	 return newNode;
 }
