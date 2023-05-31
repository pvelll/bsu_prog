#pragma once
#include "Text.h"
class HyperlinkLabel : public Text
{
	char* url = new char[100];
public:
	HyperlinkLabel(); //without
	HyperlinkLabel(int h, int w, int x1, int y1, char* t, const char* c, char* u); //params
	HyperlinkLabel(const HyperlinkLabel& other); //cope
	HyperlinkLabel(HyperlinkLabel&& other) noexcept; //move
	virtual ~HyperlinkLabel() override { std::cout << "destructor" << std::endl; }

	HyperlinkLabel operator=(const HyperlinkLabel& other);
	HyperlinkLabel operator=(HyperlinkLabel&& other) noexcept;

	void input()override;
	void print()override;
	void URL();
	char* gTxt() { return txt; }
	char* gURl() { return url; }
	const char* gColor() { return clr; }
};

