#include "Ellipse.h"

Ellipse::Ellipse()
{
	height = 0;
	width = 0;
	x = 0;
	y = 0;
}

Ellipse::Ellipse(int h, int w, int x1, int y1)
{
	height = h;
	width = w;
	x = x1;
	y = y1;
}

Ellipse::Ellipse(Ellipse& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
}

Ellipse::Ellipse(Ellipse&& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	delete[] this;
}

Ellipse Ellipse::operator=(Ellipse& other)
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	return other;
}

Ellipse Ellipse::operator=(Ellipse&& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	delete[] this;
	return other;
}

void Ellipse::Print()
{
	Options();
	Coordinates();
	std::cout << "Fill Color: ";
	std::cout << RetFillColor();
	std::cout << std::endl;
	std::cout << "Border Color: ";
	std::cout << RetBorderColor();
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

const char* Ellipse::FillColor()
{
	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		const char* color = "red";
		return color;
	}
	case 2: {
		const char* color = "green";

		return color;
	}
	case 3: {
		const char* color = "blue";
		return color;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		FillColor();
	}
	}
}

const char* Ellipse::BorderColor()
{
	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		const char* color = "red";
		return color;
	}
	case 2: {
		const char* color = "green";

		return color;
	}
	case 3: {
		const char* color = "blue";
		return color;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		BorderColor();
	}
	}
}
