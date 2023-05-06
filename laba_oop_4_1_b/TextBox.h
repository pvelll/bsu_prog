#pragma once
#include "Base.h"
class TextBox: public Base
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
	std::string text;
	std::string clr = Color();
	bool ro = ReadOnly();
public:
	bool ReadOnly();
	void textEdit();
	bool gro() { return ro; }
	std::string Text() { return text; }
	std::string Color();
};
inline std::ostream& operator<<(std::ostream& os, TextBox el) {
	el.options();
	el.coordinates();
	el.textEdit();
	std::cout << "Text: " << el.Text() << std::endl;
	std::cout << "Read only? : ";
	if (el.gro() == true)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "NO " << std::endl;
	std::cout << "Height: " << el.height;
	std::cout << std::endl;
	std::cout << "Width: " << el.width;
	std::cout << std::endl;
	std::cout << "Coordinates: x =" << el.x << " y = " << el.y;
	std::cout << std::endl;
	if (el.visibility == true)
		std::cout << "Visible!";
	else
		std::cout << "Unvisible! ";
	std::cout << std::endl;
	return os;
}

