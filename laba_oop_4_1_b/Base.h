#pragma once
#include <fstream>
#include<iostream>
#include <ostream>
#include <fstream>
#include <string>
#include <vector>


class Base
{
protected:
	bool visibility = IsVisible();
	int height;
	int width;
	int x;
	int y;

	Base(); //without
	Base(int, int, int, int); //params
	Base(Base& other) noexcept; //cope
	Base(Base&& other) noexcept; //move
	virtual ~Base() { std::cout << "destructor" << std::endl; }

	Base virtual operator=(Base& other);
	Base virtual  operator=(Base&& other) noexcept;

	virtual bool IsVisible();
	virtual void Coordinates();
	virtual void Options();

	virtual void Print() {};
	friend std::ostream& operator<<(std::ostream& os, Base& w) {
		w.Print();
		return os;
	}
	/*virtual void print(std::ostream& os, Base a);*/

};

