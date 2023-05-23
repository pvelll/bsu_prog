#pragma once
#include "Text.h"
class HyperlinkLabel : public Text
{
	char* url;
public:
	HyperlinkLabel(); //without
	HyperlinkLabel(int h, int w, int x1, int y1, char* t, const char* c, char* u); //params
	HyperlinkLabel(HyperlinkLabel& other); //cope
	HyperlinkLabel(HyperlinkLabel&& other) noexcept; //move
	virtual ~HyperlinkLabel() override { std::cout << "destructor" << std::endl; }

	HyperlinkLabel operator=(HyperlinkLabel& other);
	HyperlinkLabel operator=(HyperlinkLabel&& other) noexcept;

	void print()override;
	void URL();
	char* gTxt() { return txt; }
	char* gURl() { return url; }
	const char* gColor() { return clr; }
};

