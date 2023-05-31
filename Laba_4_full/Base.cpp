#include "Base.h"


Base::Base()
{
	height = 0;
	width = 0;
	x = 0;
	y = 0;
}

Base::Base(int h, int w, int x1, int y1)
{
	height = h;
	width = w;
	x = x1;
	y = y1;
}

Base::Base(const Base& other) noexcept
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
}

Base::Base(Base&& other) noexcept
{

	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	delete &other;
}

Base Base::operator=(const Base& other)
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	return *this;
}

Base Base::operator=(Base&& other) noexcept
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	delete &other;
	return *this;
}

void Base::isVisible()
{
	std::cout << "Is visible?" << std::endl << "input 1 - yes; " << std::endl << "input 2 - no " << std::endl;
	int choice;
	while (!(std::cin >> choice)) {
		std::cout << "Invalid input, plese input number: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	switch (choice) {
	case 1: {
		visibility = true;
		break;
	}
	case 2: {
		visibility = false;
		break;
	}
	default:
		std::cout << "error 404 try again" << std::endl;
		isVisible();
	}
}

void Base::coordinates()
{
	std::cout << "Input x >> ";
	std::cin >> x;
	std::cout << "Input y >> ";
	std::cin >> y;
	std::cout << std::endl;
}

void Base::options()
{
	int height1, width1;
	std::cout << "Input height >> ";
	std::cin >> height1;
	height = height1;
	std::cout << "Input width >> ";
	std::cin >> width1;
	width = width1;
	std::cout << std::endl;
}
