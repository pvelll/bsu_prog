#include "List.h"

template<typename type>
LinkedList<type>::LinkedList(LinkedList<type>& other)
{
	if (this != &other)
	{
		tail = other.tail;
		head = other.head;
		other.head = nullptr;
		other.tail = nullptr;
	}
}

template<typename type>
LinkedList<type>::LinkedList(LinkedList<type>&& other) noexcept
{
	if (this != &other)
	{
		tail = other.tail;
		head = other.head;
		other.head = nullptr;
		other.tail = nullptr;
	}
}

template<typename type>
LinkedList<type>& LinkedList<type>::operator=(LinkedList<type>& other)
{
	if (this != &other)
	{
		tail = other.tail;
		head = other.head;
		other.head = nullptr;
		other.tail = nullptr;
	}
	return other;
}

template<typename type>
LinkedList<type>& LinkedList<type>::operator=(LinkedList<type>&& other)
{
	if (this != &other)
	{
		tail = other.tail;
		head = other.head;
		other.head = nullptr;
		other.tail = nullptr;
	}
	return other;
}
