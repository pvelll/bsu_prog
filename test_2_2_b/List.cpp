#include "List.h"
template<typename type>
List<type>::List()
{
	size = 0;
	head = nullptr;
}

template<typename type>
List<type>::~List()
{
	clear();
}

template<typename type>
List<type>::List(List& other)
{
	if (this != &other)
	{
		size = other.size;
		head = other.head;
		other.head = nullptr;
	}
}

template<typename type>
List<type>::List(List&& other) noexcept
{
	if (this != &other)
	{
		size = other.size;
		head = other.head;
		other.head = nullptr;
	}
}

template<typename type>
inline List<type>& List<type>::operator=(List<type>& other)
{
	if (this != &other)
	{
		size = other.size;
		head = other.head;
		other.head = nullptr;
	}
	return *other;
}

template<typename type>
inline List<type>& List<type>::operator=(List<type>&& other)
{
	if (this != &other)
	{
		size = other.size;
		head = other.head;
		other.head = nullptr;
	}
	return *other;
}

template<typename type>
void List<type>::insert(type data, int num)
{
	if (num == 0)
	{
		pushFront(data);
	}
	else
	{
		Node<type>* previous = this->head;
		for (int i = 0; i < num - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<type>* newNode = new Node(data, previous->pNext);
		previous->pNext = newNode;
		size++;
	}
	

}

template<typename type>
void List<type>::pushBack(type data)
{
	if (head == nullptr)
	{
		head = new Node<type>(data);
	}
	else
	{
		Node<type>* current = this->head;
		while (current->pNext != nullptr) 
		{
			current = current->pNext;
		}
		current->pNext = new Node<type>(data);
	}
	size++;
}

template<typename type>
void List<type>::pushFront(type data)
{
	head = new Node<type>(data, head);
	size++;
}

template<typename type>
type& List<type>::operator[](const int index)
{
	int counter = 0;
	Node<type>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename type>
void List<type>::popFront()
{
	Node<type> *tmp = head;
	head = head->pNext;
	delete tmp;
	size--;
}

template<typename type>
void List<type>::popBack()
{
	remove(size - 1);
}

template<typename type>
void List<type>::remove(int num)
{
	if (num == 0)
	{
		popFront();
	}	
	else
	{
		Node<type>* previous = this->head;
		for (int i = 0; i < num - 1; i++)
		{
			previous = previous->pNext;
		}
		Node<type>* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		size--;
	}
	

}

template<typename type>
void List<type>::clear()
{
	while(size)
	{
		popFront();
	}
}