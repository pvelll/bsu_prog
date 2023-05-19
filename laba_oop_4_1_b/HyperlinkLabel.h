#pragma once
#include "Text.h"
class HyperlinkLabel: public Base_Text
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
	void print()override;
	std::string URL();
	std::string gTxt() { return txt; }
	std::string gURl() { return url; }
	std::string gColor() { return clr; }
private:
	
	std::string url = URL();
};

