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


void TextBox::Print()
{
	Options();
	Coordinates();
	std::cout << "Text: " << gText() << std::endl;
	std::cout << "Read only? : ";
	if (gro() == true)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "NO " << std::endl;
	std::cout << "Color: "<< clr << std::endl;

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



