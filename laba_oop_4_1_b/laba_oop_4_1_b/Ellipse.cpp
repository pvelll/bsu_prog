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

std::string Ellipse::FillColor()
{
	std::string color;
	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		color = "red";
		return color;
		break;
	}
	case 2: {
		color = "green";
		return color;
		break;
	}
	case 3: {
		color = "blue";
		return color;
		break;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		return 0;
		break;
	}
		

	}
}

std::string Ellipse::BorderColor()
{
	std::string color;
	std::cout << "Choose the border color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		color = "red";
		return color;
	}
	case 2: {
		color = "green";
		return color;
	}
	case 3: {
		color = "blue";
		return color;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		return 0;
	}


	}
}
