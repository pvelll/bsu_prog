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

std::string HyperlinkLabel::Text()
{
	std::string text;
	std::cin >> text;
	return text;
}

std::string HyperlinkLabel::Color()
{
	std::string color;
	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		color = "red";
		return color;
		break;
	}
	case 2: {
		color = "green";
		return color;
		break;
	}
	case 3: {
		color = "blue";
		return color;
		break;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		return 0;
		break;
	}
	}
}

std::string HyperlinkLabel::URL()
{
	std::string text;
	std::cin >> text;
	return text;
}
