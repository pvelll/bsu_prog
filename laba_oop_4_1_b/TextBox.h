#pragma once
#include "Text.h"
class TextBox: public Base_Text
{
public:
	TextBox(); //without
	TextBox(int, int, int, int); //params
	TextBox(TextBox& other) noexcept; //cope
	TextBox(TextBox&& other) noexcept; //move
	virtual ~TextBox() override { std::cout << "destructor" << std::endl; }
public:
	TextBox operator=(TextBox& other);
	TextBox operator=(TextBox&& other) noexcept;
private:
	bool ro = ReadOnly();
public:
	void print()override;
	bool ReadOnly();
	bool gro() { return ro; }
	std::string gText() { return txt; }
};


