#include "HashTable.h"
#include <iostream>
#include <string>
#include <vector> 
using namespace std;



HashTable::HashTable(){
}

void HashTable::Place()
{
}

void HashTable::Collision()
{
}

void HashTable::HashFunction() {

}

//Function Taken from GeeksforGeeks -
// To demonstrate Vector<bool> Hashing 
void HashTable ::vectorHashing()
{

	// Get the Vector<bool> 
	// to get its hash value 
	vector<bool>
		h_vecbool{ true, false,
				   true, false };

	// Instatiation of Object 
	hash<vector<bool> > hash_vector_bool;

	// Using operator() to get hash value 
	cout << "\nVector<bool> hash value: "
		<< hash_vector_bool(h_vecbool)
		<< endl;
}
// To make the hash into an index we can use a % operator