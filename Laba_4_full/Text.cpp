#include "Text.h"
Text::Text() : Base()
{
	txt = NULL;
	clr = NULL;
}
Text::Text(int h, int w, int x1, int y1, char* t, const char* c) : Base(h, w, x1, y1) {
	txt = t;
	clr = c;
}

Text::Text(const Text& other) : Base(other)
{
	if (this != &other) {
		txt = other.txt;
		clr = other.clr;
	}
}

Text::Text(Text&& other) noexcept : Base(other)
{
	if (this != &other) {
		txt = other.txt;
		clr = other.clr;
	}
	delete &other;
}

Text& Text::operator=(const Text& other)
{
	if (this != &other) {
		txt = other.txt;
		clr = other.clr;
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	return *this;
}

Text& Text::operator=(Text&& other) noexcept
{
	if (this != &other) {
		txt = other.txt;
		clr = other.clr;
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	delete &other;
	return *this;
}


void Text::textEd()
{
	char* text = new char[100];
	std::cout << "Input some text: " << std::endl;
	std::cin >> text;
	txt = text;
}

void Text::chooseColor()
{

	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	while (!(std::cin >> choice)) {
		std::cout << "Invalid input, plese input number: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	switch (choice) {
	case 1: {
		const char* color = "red";
		clr = color;
		break;
	}
	case 2: {
		const char* color = "green";

		clr = color;
		break;
	}
	case 3: {
		const char* color = "blue";
		clr = color;
		break;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		chooseColor();
	}
	}
}