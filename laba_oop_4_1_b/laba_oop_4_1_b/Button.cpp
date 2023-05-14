#include "Button.h"
Button::Button()
{
	height = 0;
	width = 0;
	x = 0;
	y = 0;
}

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
void Button::textEd()
{
	std::cout << "Input soxe text: " << std::endl;
	std::cin >> text;
}
