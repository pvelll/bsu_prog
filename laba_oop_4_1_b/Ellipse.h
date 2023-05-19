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
public:
	Ellipse operator=(Ellipse& other);
	Ellipse operator=(Ellipse&& other) noexcept;
public:
	void print() override;
	virtual std::string FillColor();
	virtual std::string BorderColor();
	virtual std::string rFillColor() { return fcolor; }
	virtual std::string rBorderColor() { return bcolor; }
private:
	std::string fcolor = FillColor();
	std::string bcolor = BorderColor();
};


