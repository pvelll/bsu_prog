#include "HyperlinkLabel.h"

HyperlinkLabel::HyperlinkLabel() : Text()
{
	url = NULL;
}

HyperlinkLabel::HyperlinkLabel(int h, int w, int x1, int y1, char* t, const char* c, char* u) : Text(h, w, x1, y1, t, c)
{
	url = u;
}

HyperlinkLabel::HyperlinkLabel(HyperlinkLabel& other) : Text(other)
{
	if (this != &other)
		url = other.url;
}

HyperlinkLabel::HyperlinkLabel(HyperlinkLabel&& other) noexcept : Text(other)
{
	if (this != &other) {
		url = other.url;
	}
	delete[] this;
}

HyperlinkLabel HyperlinkLabel::operator=(HyperlinkLabel& other)
{
	if (this != &other) {
		url = other.url;
		txt = other.txt;
		clr = other.clr;
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	return other;
}

HyperlinkLabel HyperlinkLabel::operator=(HyperlinkLabel&& other) noexcept
{
	if (this != &other) {
		url = other.url;
		txt = other.txt;
		clr = other.clr;
		width = other.width;
		height = other.height;
		x = other.x;
		y = other.y;
	}
	delete this;
	return other;
}



void HyperlinkLabel::print()
{
	options();
	coordinates();
	URL();
	textEd();
	chooseColor();
	std::cout << "Text: ";
	std::cout << gTxt();
	std::cout << std::endl;
	std::cout << "URL: ";
	std::cout << gURl();
	std::cout << std::endl;
	std::cout << "Color: ";
	std::cout << gColor();
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

void HyperlinkLabel::URL()
{
	std::cout << "Input URL: " << std::endl;
	char* text = new char[100];
	std::cin >> text;
	txt = text;
}
