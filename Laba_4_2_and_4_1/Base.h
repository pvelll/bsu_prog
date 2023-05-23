#pragma once

#include<iostream>
#include <ostream>


class Base
{
protected:
	bool visibility;
	int height;
	int width;
	int x;
	int y;

	Base(); //without
	Base(int, int, int, int); //params
	Base(Base& other) noexcept; //cope
	Base(Base&& other) noexcept; //move
public:
	virtual ~Base() { std::cout << "destructor" << std::endl; } // public тк компилятор ругается, не может вызвать деструкор просто так, хз почему 
protected:
	Base virtual operator=(Base& other);
	Base virtual  operator=(Base&& other) noexcept;

	void isVisible();
	virtual void coordinates();
	virtual void options();
public: // public, тк  DynamicArray.сpp вызываю этот метод напрямую
	virtual void print() {};
	friend std::ostream& operator<<(std::ostream& os, Base& w) {
		w.print();
		return os;
	}

};


