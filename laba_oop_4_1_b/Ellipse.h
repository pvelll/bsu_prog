#pragma once
#include "Base.h"
class Ellipse: public Base
{
public:
	Ellipse(); //without
	Ellipse(int, int, int, int); //params
	Ellipse(Ellipse& other) noexcept; //cope
	Ellipse(Ellipse&& other) noexcept; //move
	virtual ~Ellipse() override { std::cout << "destructor" << std::endl; }

	Ellipse operator=(Ellipse& other);
	Ellipse operator=(Ellipse&& other) noexcept;

	void Print() override;
	const char* FillColor();
	const char* BorderColor();
	const char* RetFillColor() { return fcolor; }
	const char* RetBorderColor() { return bcolor; }
private:
	const char* fcolor = FillColor();
	const char* bcolor = BorderColor();
};


