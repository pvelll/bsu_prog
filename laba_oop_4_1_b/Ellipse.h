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
	virtual std::string FillColor();
	virtual std::string BorderColor();
	virtual std::string rFillColor() { return fcolor; }
	virtual std::string rBorderColor() { return bcolor; }
private:
	std::string fcolor = FillColor();
	std::string bcolor = BorderColor();
};
inline std::ostream& operator<<(std::ostream& os, Ellipse el) {
	el.options();
	el.coordinates();
	std::cout << "Fill Color: ";
	std::cout << el.rFillColor();
	std::cout << std::endl;
	std::cout << "Border Color: ";
	std::cout << el.rBorderColor();
	std::cout << std::endl;
	std::cout << "Height: " << el.height;
	std::cout << std::endl;
	std::cout << "Width: " << el.width;
 	std::cout << std::endl;
	std::cout << "Coordinates: x =" << el.x << " y = " << el.y;
	std::cout << std::endl;
	if (el.visibility == true)
		std::cout << "Visible!";
	else
		std::cout << "Unvisible! ";
	std::cout << std::endl;
	return os;
}

