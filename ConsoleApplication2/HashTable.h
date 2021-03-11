#pragma once

#ifndef HashTable_H
#define HashTable_H

#include <iostream>
#include <string>
#include <vector> 
using namespace std;

class HashTable
{
	public:
	HashTable();
	HashTable(int SetIndexSize);
	void InsertItem(unsigned int key);
	void DeleteItem(int key);
	int HashFunction(unsigned int rawHash);
	void DisplayHash();
	void Collision();

	void vectorHashing();

private:
	int key;
	bool value;
	vector<int> *BasicHashArray;
	int indexSize = 99;
};

#endif // !1
