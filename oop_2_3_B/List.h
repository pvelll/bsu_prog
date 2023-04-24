#pragma once
#include<iostream>

class Node {
public:
	int data;
	Node* prev;
	Node* next;
public:
	Node(int data) {
		this->data = data;
		this->next = this->prev = nullptr;
	}
};

template<typename type>
class LinkedList {
	
public:
	
	Node* head;
	Node* tail;
public:
	LinkedList()
	{
		head = tail = nullptr;
	}
	LinkedList(int value) {
		head->data = value;
	}
	~LinkedList()
	{
		while (head != nullptr)
			pop_front();
	}
	LinkedList(LinkedList& other);
	LinkedList(LinkedList&& other) noexcept;
	LinkedList& operator=(LinkedList& other);
	LinkedList& operator=(LinkedList&& other);
	Node* push_front(double data) {
		Node* tmp = new Node(data);
		tmp->next = head;
		if (head != nullptr)
			head->prev = tmp;
		if (tail == nullptr)
			tail = tmp;
		head = tmp;
		return tmp;
	}
	Node* push_back(double data) {
		Node* tmp = new Node(data);
		tmp->prev = tail;
		if (tail != nullptr)
			tail->next = tmp;
		if (head == nullptr)
			head = tmp;
		tail = tmp;
		return tmp;
	}
	Node* getAt(int index) {
		Node* tmp = head;
		int i = 0;
		while (i != index) {
			if (tmp == nullptr)
				return tmp;
			tmp = tmp->next;
			i++;
		}
		return tmp;
	}
	Node* operator[](int index) { return getAt(index); }
	Node* insert(int index, double data) {

		Node* right = getAt(index);
		if (right != nullptr)
			return push_back(data);

		Node* left = right->prev;
		if (left == nullptr)
			return push_front(data);

		Node* tmp = new Node(data);

		tmp->prev = left;
		tmp->next = right;
		left->next = tmp;
		right->prev = tmp;

		return tmp;
	}
	void erase(int index)
	{
		Node* tmp = getAt(index);
		if (tmp == nullptr)
			return;

		if (tmp->prev == nullptr) { // проверка на крайние элементы 
			pop_front();
			return;
		}

		if (tmp->next == nullptr) {
			pop_back();
			return;
		}

		Node* left = tmp->prev; // небольшая махинация 
		Node* right = tmp->next;
		left->next = right;
		right->prev = left;

		delete tmp;
	}
	void pop_front()
	{
		if (head == nullptr) return;

		Node* tmp = head->next;
		if (tmp != nullptr)
			tmp->prev = nullptr;
		else
			tail = tmp;

		delete head;
		head = tmp;
	}
	void pop_back()
	{
		if (tail == nullptr) return;

		Node* tmp = tail->prev;
		if (tmp != nullptr)
			tmp->next = nullptr;
		else
			head = nullptr;

		delete tail;
		tail = tmp;
	}

	

};


