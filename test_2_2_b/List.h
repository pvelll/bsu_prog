#pragma once
#include <fstream>
#include <iostream>
template<typename type>
class List
{
public:
	List();
	~List();
	List(List& other);
	List(List&& other) noexcept;
	List& operator=(List& other);
	List& operator=(List&& other);
	void insert(type data, int num);
	void pushBack(type data);
	void pushFront(type data);
	int GetSize() { return size; }
	type& operator[](const int index);
	void popFront();
	void popBack();
	void remove(int index);
	void clear();


private:
	template<typename type>
	class Node 
	{
	public:
		Node *pNext;
		type data;
		Node(type data = type(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
		
	};
	int size;
	Node<type> *head;
};


