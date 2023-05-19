#include "Button.h"
Button::Button()
{
	height = 0;
	width = 0;
	x = 0;
	y = 0;
}

//void Button::print(std::ostream& os, Button b)  {
//	std::cout << " cin text: ";
//	b.textEd();
//	std::cout << std::endl;
//	b.options();
//	b.coordinates();
//	std::cout << "Hint text: ";
//	b.ToolTipText();
//	std::cout << "Text :  " << b.Text();
//	std::cout << std::endl;
//	std::cout << "Height: " << b.height;
//	std::cout << std::endl;
//	std::cout << "Width: " << b.width;
//	std::cout << std::endl;
//	std::cout << "Coordinates: x =" << b.x << " y = " << b.y;
//	std::cout << std::endl;
//	if (b.visibility == true)
//		std::cout << "Visible!";
//	else
//		std::cout << "Unvisible! ";
//	std::cout << std::endl;
//	
//}

Button::Button(int h, int w, int x1, int y1)
{
	height = h;
	width = w;
	x = x1;
	y = y1;
}

Button::Button(Button& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
}

Button::Button(Button&& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	delete[] this;
}

Button Button::operator=(Button& other)
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	return other;
}

Button Button::operator=(Button&& other) noexcept
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
void Button::print()
{
	std::cout << " cin text: ";
	textEd();
	std::cout << std::endl;
	options();
	coordinates();
	std::cout << "Hint text: ";
	ToolTipText();
	std::cout << "Text :  " << Text();
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
void Button::textEd()
{
	std::cout << "Input soxe text: " << std::endl;
	std::cin >> text;
}
