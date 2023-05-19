#include "TextBox.h"

TextBox::TextBox()
{
	height = 0;
	width = 0;
	x = 0;
	y = 0;
}

TextBox::TextBox(int h, int w, int x1, int y1)
{
	height = h;
	width = w;
	x = x1;
	y = y1;
}

TextBox::TextBox(TextBox& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
}

TextBox::TextBox(TextBox&& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	delete[] this;
}

TextBox TextBox::operator=(TextBox& other)
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	return other;
}

TextBox TextBox::operator=(TextBox&& other) noexcept
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


bool TextBox::ReadOnly()
{
	bool tmp = false;
	std::cout << "Only read?" << std::endl << "input 1 - yes; " << std::endl << "input 2 - no " << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		return true;
	}
	case 2: {
		return false;
	}
	default:
		std::cout << "error 404 try again" << std::endl;
		return 0;
	}
}



