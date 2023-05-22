#pragma once
#include "Text.h"
class HyperlinkLabel: public Text
{
public:
	HyperlinkLabel(); //without
	HyperlinkLabel(int, int, int, int); //params
	HyperlinkLabel(HyperlinkLabel& other) noexcept; //cope
	HyperlinkLabel(HyperlinkLabel&& other) noexcept; //move
	virtual ~HyperlinkLabel() override { std::cout << "destructor" << std::endl; }

	HyperlinkLabel operator=(HyperlinkLabel& other);
	HyperlinkLabel operator=(HyperlinkLabel&& other) noexcept;

	void Print()override;
	char* URL();
	char* gTxt() { return txt; }
	char* gURl() { return url; }
	const char* gColor() { return clr; }
private:	
	char* url = URL();
};

