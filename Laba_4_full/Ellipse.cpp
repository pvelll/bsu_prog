#include "Ellipse.h"

Ellipse::Ellipse() : Base()
{
	fcolor = " ";
	bcolor = " ";
}

Ellipse::Ellipse(int h, int w, int x1, int y1, const char* bclr, const char* fclr) : Base(h, w, x1, y1)
{
	fcolor = fclr;
	bcolor = bclr;
}

Ellipse::Ellipse(const Ellipse& other) : Base(other)
{
	if (this != &other) {
		fcolor = other.fcolor;
		bcolor = other.bcolor;
	}
}

Ellipse::Ellipse(Ellipse&& other) noexcept : Base(other)
{
	if (this != &other) {
		fcolor = other.fcolor;
		bcolor = other.bcolor;
	}
	delete &other;
}

Ellipse Ellipse::operator=(const Ellipse& other)
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
		fcolor = other.fcolor;
		bcolor = other.bcolor;
	}
	delete& other;
	return *this;
}

Ellipse Ellipse::operator=(Ellipse&& other) noexcept
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
		fcolor = other.fcolor;
		bcolor = other.bcolor;
	}
	delete &other;
	return *this;
}

void Ellipse::print()
{
	
	std::cout << "Fill Color: ";
	std::cout << getFillColor();
	std::cout << std::endl;
	std::cout << "Border Color: ";
	std::cout << getBorderColor();
	std::cout << std::endl;
	std::cout << "Height: " << height;
	std::cout << std::endl;
	std::cout << "Width: " << width;
	std::cout << std::endl;
	std::cout << "Coordinates: x =" << x << " y = " << y;
	std::cout << std::endl;
	if (visibility == true)
		std::cout << "Visible!";
	else
		std::cout << "Unvisible! ";
	std::cout << std::endl;
}

void Ellipse::input()
{
	isVisible();
	options();
	coordinates();
	setFillColor();
	setBorderColor();
}

void Ellipse::setFillColor()
{
	std::cout << "Choose the fill color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	while (!(std::cin >> choice)) {
		std::cout << "Invalid input, plese input number: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	switch (choice) {
	case 1: {
		const char* color = "red";
		fcolor = color;
		break;
	}
	case 2: {
		const char* color = "green";

		fcolor = color;
		break;
	}
	case 3: {
		const char* color = "blue";
		fcolor = color;
		break;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		setFillColor();
	}
	}
}
void Ellipse::setBorderColor()
{
	std::cout << "Choose the border color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	while (!(std::cin >> choice)) {
		std::cout << "Invalid input, plese input number: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	switch (choice) {
	case 1: {
		const char* color = "red";
		fcolor = color;
		break;
	}
	case 2: {
		const char* color = "green";

		fcolor = color;
		break;
	}
	case 3: {
		const char* color = "blue";
		fcolor = color;
		break;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		setBorderColor();
	}
	}
}
