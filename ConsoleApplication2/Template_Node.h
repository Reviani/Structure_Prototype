#pragma once

template <class T>
class Template_Node
{
public:
	//Node();
	Template_Node(T item);
	int key;
	Node *left, *right;
	T data;
};

template<class T>
inline Template_Node<T>::Template_Node(T item)
{
	if (data != nullptr) {
		item = data;
	}
}
