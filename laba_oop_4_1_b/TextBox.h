#pragma once
#include "Text.h"
class TextBox: public Text
{
public:
	TextBox(); //without
	TextBox(int, int, int, int); //params
	TextBox(TextBox& other) noexcept; //cope
	TextBox(TextBox&& other) noexcept; //move
	virtual ~TextBox() override { std::cout << "destructor" << std::endl; }

	TextBox operator=(TextBox& other);
	TextBox operator=(TextBox&& other) noexcept;
private:
	bool ro = ReadOnly();
public:
	void Print()override;
	bool ReadOnly();
	bool gro() { return ro; }
	char* gText() { return txt; }
};


