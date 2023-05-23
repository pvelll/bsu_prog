#include "Button.h"
Button::Button() : Base()
{
	for (size_t i = 0; i < 100; i++)
	{
		text[i] = NULL;
	};
}


Button::Button(int h, int w, int x1, int y1, char* word) : Base(h, w, x1, y1)
{
	for (size_t i = 0; i < 100; i++)
	{
		word[i] = text[i];
	}
}

Button::Button(Button& other) : Base(other)
{
	if (this != &other) {
		for (size_t i = 0; i < 100; i++)
		{
			text[i] = other.text[i];
		}
	}
}

Button::Button(Button&& other) noexcept : Base(std::move(other))
{
	if (this != &other) {
		for (size_t i = 0; i < 100; i++)
		{
			text[i] = other.text[i];
		}
	}
	delete[] this;
}

Button Button::operator=(Button& other)
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
		for (size_t i = 0; i < 100; i++)
		{
			text[i] = other.text[i];
		}
	}
	return other;
}

Button Button::operator=(Button&& other) noexcept
{
	if (this != &other) {
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
		for (size_t i = 0; i < 100; i++)
		{
			text[i] = other.text[i];
		}
	}
	delete[] this;
	return other;
}
void Button::print()
{
	isVisible();
	std::cout << " cin text: ";
	char te[100];
	std::cin >> te;
	setText(te);
	std::cout << std::endl;
	options();
	coordinates();
	std::cout << "Hint text: ";
	toolTipText();
	std::cout << "Text :  " << text;
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
void Button::setText(char* t)
{
	strncpy_s(text, t, sizeof(text) - 1);
	text[sizeof(text) - 1] = '\0';
}
