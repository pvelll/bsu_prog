#pragma once
#include "Base.h"
class Ellipse : public Base
{
	const char* fcolor;
	const char* bcolor;
public:
	Ellipse(); //without
	Ellipse(int, int, int, int, const char*, const char*); //params
	Ellipse(const Ellipse& other); //cope
	Ellipse(Ellipse&& other) noexcept; //move
	virtual ~Ellipse() override { std::cout << "destructor" << std::endl; }

	Ellipse operator=(const Ellipse& other);
	Ellipse operator=(Ellipse&& other) noexcept;

	void print() override;
	void input() override;
	void setFillColor();
	void setBorderColor();
	const char* getFillColor() { return fcolor; }
	const char* getBorderColor() { return bcolor; }
};


