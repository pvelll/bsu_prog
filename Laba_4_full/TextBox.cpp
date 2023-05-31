#include "TextBox.h"

//TextBox::TextBox() : Text()
//{
//	ro = false;
//}
//
//TextBox::TextBox(int h, int w, int x1, int y1, char* t, const char* c, bool r) : Text(h, w, x1, y1, t, c)
//{
//	ro = r;
//}
//
//TextBox::TextBox(TextBox& other) : Text(other)
//{
//	if (this != &other) {
//		ro = other.ro;
//	}
//}
//
//TextBox::TextBox(TextBox&& other) noexcept : Text(other)
//{
//	if (this != &other) {
//		ro = other.ro;
//	}
//	delete[] this;
//}
//
//TextBox TextBox::operator=(TextBox& other)
//{
//	if (this != &other) {
//		ro = other.ro;
//		txt = other.txt;
//		clr = other.clr;
//		width = other.width;
//		height = other.height;
//		x = other.x;
//		y = other.y;
//	}
//	return other;
//}
//
//TextBox TextBox::operator=(TextBox&& other) noexcept
//{
//	if (this != &other) {
//		ro = other.ro;
//		txt = other.txt;
//		clr = other.clr;
//		width = other.width;
//		height = other.height;
//		x = other.x;
//		y = other.y;
//	}
//	delete this;
//	return other;
//}


void TextBox::input()
{
	options();
	coordinates();
	setReadOnly();
	textEd();
	chooseColor();
}

void TextBox::print()
{
	
	std::cout << "Text: " << getText() << std::endl;
	std::cout << "Read only? : ";
	if (getReadOnly() == true)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "NO " << std::endl;
	std::cout << "Color: " << clr << std::endl;

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

void TextBox::setReadOnly()
{
	std::cout << "Only read?" << std::endl << "input 1 - yes; " << std::endl << "input 2 - no " << std::endl;
	int choice;
	while (!(std::cin >> choice)) {
		std::cout << "Invalid input, plese input number: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	switch (choice) {
	case 1: {
		ro = true;
		break;
	}
	case 2: {
		ro = false;
		break;
	}
	default:
		std::cout << "error 404 try again" << std::endl;
		setReadOnly();
	}
}



