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

Base::Base(Base& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
}

Base::Base(Base&& other) noexcept
{

	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	delete[] this;
}

Base Base::operator=(Base& other)
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	return other;
}

Base Base::operator=(Base&& other) noexcept
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

bool Base::IsVisible()
{
		bool tmp = false;
		std::cout << "Is visible?" << std::endl << "input 1 - yes; " << std::endl << "input 2 - no " << std::endl;
		int choice;
		std::cin >> choice;
		switch (choice) {
		case 1: {
			return true;
			break;
		}
		case 2: {
			return false;
			break;
		}
		default:
			std::cout << "error 404 try again" << std::endl;
			return 0;
			break;
		}
}

void Base::Coordinates()
{
	std::cout << "Input x >> ";
	std::cin >> x;
	std::cout << "Input y >> ";
	std::cin >> y;
	std::cout << std::endl;
}

void Base::Options()
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
