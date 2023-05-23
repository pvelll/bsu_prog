#pragma once
#include "Text.h"
class TextBox : public Text
{
	bool ro;
public:
	TextBox(); //without
	TextBox(int h, int w, int x1, int y1, char* t, const char* c, bool r); //params
	TextBox(TextBox& other); //cope
	TextBox(TextBox&& other) noexcept; //move
	virtual ~TextBox() override { std::cout << "destructor" << std::endl; }

	TextBox operator=(TextBox& other);
	TextBox operator=(TextBox&& other) noexcept;

	void print()override;
	void setReadOnly();
	bool getReadOnly() { return ro; }
	char* getText() { return txt; }
};


