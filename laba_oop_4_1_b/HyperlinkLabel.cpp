#include "HyperlinkLabel.h"

HyperlinkLabel::HyperlinkLabel()
{
	height = 0;
	width = 0;
	x = 0;
	y = 0;
}

HyperlinkLabel::HyperlinkLabel(int h, int w, int x1, int y1)
{
	height = h;
	width = w;
	x = x1;
	y = y1;
}

HyperlinkLabel::HyperlinkLabel(HyperlinkLabel& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
}

HyperlinkLabel::HyperlinkLabel(HyperlinkLabel&& other) noexcept
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	delete[] this;
}

HyperlinkLabel HyperlinkLabel::operator=(HyperlinkLabel& other)
{
	if (this != &other) {
		other.width = width;
		other.height = height;
		other.x = x;
		other.y = y;
	}
	return other;
}

HyperlinkLabel HyperlinkLabel::operator=(HyperlinkLabel&& other) noexcept
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



void HyperlinkLabel::print()
{
	options();
	coordinates();
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
	std::cout << "Width: " <<width;
	std::cout << std::endl;
	std::cout << "Coordinates: x =" << x << " y = " << y;
	std::cout << std::endl;
	if (visibility == true)
		std::cout << "Visible!";
	else
		std::cout << "Unvisible! ";
	std::cout << std::endl;
}

std::string HyperlinkLabel::URL()
{
	std::string text;
	std::cin >> text;
	return text;
}
