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



std::string HyperlinkLabel::URL()
{
	std::string text;
	std::cin >> text;
	return text;
}
