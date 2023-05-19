#pragma once
#include <fstream>
#include<iostream>
#include <ostream>
#include <fstream>
#include <string>
#include <vector>


class Base
{
public:
	bool visibility = isVisible();
	int height;
	int width;
	int x;
	int y;
public:
	Base(); //without
	Base(int, int, int, int); //params
	Base(Base& other) noexcept; //cope
	Base(Base&& other) noexcept; //move
	virtual ~Base() { std::cout << "destructor" << std::endl; }
public:
	Base virtual operator=(Base& other);
	Base virtual  operator=(Base&& other) noexcept;
public:
	virtual bool isVisible();
	virtual void coordinates();
	virtual void options();
protected:
	virtual void print() {};
	friend std::ostream& operator<<(std::ostream& os, Base& w) {
		w.print();
		return os;
	}
	/*virtual void print(std::ostream& os, Base a);*/

};

