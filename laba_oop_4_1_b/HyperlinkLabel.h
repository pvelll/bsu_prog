#pragma once
#include "Base.h"
class HyperlinkLabel: public Base
{
public:
	HyperlinkLabel(); //without
	HyperlinkLabel(int, int, int, int); //params
	HyperlinkLabel(HyperlinkLabel& other) noexcept; //cope
	HyperlinkLabel(HyperlinkLabel&& other) noexcept; //move
	virtual ~HyperlinkLabel() override { std::cout << "destructor" << std::endl; }
public:
	HyperlinkLabel operator=(HyperlinkLabel& other);
	HyperlinkLabel operator=(HyperlinkLabel&& other) noexcept;
public:
	std::string Text();
	std::string Color();
	std::string URL();
	std::string gTxt() { return txt; }
	std::string gURl() { return url; }
	std::string gColor() { return clr; }
private:
	std::string txt = Text();
	std::string url = URL();
	std::string clr = Color();
};
inline std::ostream& operator<<(std::ostream& os, HyperlinkLabel hll) {
	hll.options();
	hll.coordinates();
	std::cout << "Text: ";
	std::cout << hll.gTxt();
	std::cout << std::endl;
	std::cout << "URL: ";
	std::cout << hll.gURl();
	std::cout << std::endl;
	std::cout << "Color: ";
	std::cout << hll.gColor();
	std::cout << std::endl;
	std::cout << "Height: " << hll.height;
	std::cout << std::endl;
	std::cout << "Width: " << hll.width;
	std::cout << std::endl;
	std::cout << "Coordinates: x =" << hll.x << " y = " << hll.y;
	std::cout << std::endl;
	if (hll.visibility == true)
		std::cout << "Visible!";
	else
		std::cout << "Unvisible! ";
	std::cout << std::endl;
	return os;
}
