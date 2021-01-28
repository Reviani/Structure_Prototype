#pragma once

#ifndef HashTable_H
#define HashTable_H

#include <iostream>
#include <string>
using namespace std;

class HashTable
{
	public:
	HashTable();
	void Place();
	void Collision();
	void HashFunction();

	void vectorHashing();

private:
	int key;
	bool value;
};

#endif // !1
