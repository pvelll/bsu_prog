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
	Base(); //without
	Base(int, int, int, int); //params
	Base(Base& other) noexcept; //cope
	Base(Base&& other) noexcept; //move
	virtual ~Base() { std::cout << "destructor" << std::endl; }
public:
	Base operator=(Base& other);
	Base operator=(Base&& other) noexcept;
public:
	virtual bool isVisible();
	virtual void coordinates();
	virtual void options();
public:
	bool visibility = isVisible();
	int height;
	int width;
	int x;
	int y;
};

