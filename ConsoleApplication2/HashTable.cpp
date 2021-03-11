#include "HashTable.h"
#include <iostream>
#include <string>
#include <vector> 
using namespace std;



HashTable::HashTable(){
	BasicHashArray = new vector<int>[indexSize];
}

HashTable::HashTable(int SetIndexSize)
{
	indexSize = SetIndexSize;
	BasicHashArray = new vector<int>[indexSize];
}

void HashTable::InsertItem(unsigned int key)
{
	// Calls the hash fucntion to index the hashkey
	int index = HashFunction(key);

	// giving serrors, probably because index is a negative value
	BasicHashArray[index].push_back(key);
//	BasicHashArray[index].insert(BasicHashArray->end(),1);

	//BasicHashArray[index].insert(BasicHashArray->end(), 1);

	// BasicHashArray.insert(BasicHashArray.begin() + ReducedHash, 42);
	// Checks for collision, Starts chain if true
	// if (ReducedHash > 0 && ReducedHash < BasicHashArray.size()) 
		//Collision();
}

void HashTable::DeleteItem(int key)
{
}

int HashTable::HashFunction(unsigned int rawHash)
{
	// Uses the modulous to break up the hash to a manageable index
	int ReducedHash;
	ReducedHash = rawHash % indexSize;



	return ReducedHash;

}

void HashTable::DisplayHash()
{
}

 

void HashTable::Collision()
{

	cout << "\n  Found thing  \n";
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

	unsigned int temp = hash_vector_bool(h_vecbool);
	float temp2 = hash_vector_bool(h_vecbool);

	// Using operator() to get hash value 
	cout << "\nVector<bool> hash value: "
		<< temp
		<< endl;

	// now attempting to insert key to hashtable
 	InsertItem(temp);

	//int tempint = HashFunction(hash_vector_bool(h_vecbool));


	

}
// To make the hash into an index we can use a % operator