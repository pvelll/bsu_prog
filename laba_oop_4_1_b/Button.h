#pragma once
#include "Base.h"
class Button: public Base
{
public:
	Button(); //without
	Button(int, int, int, int); //params
	Button(Button& other) noexcept; //cope
	Button(Button&& other) noexcept; //move
	virtual ~Button() override { std::cout << "destructor" << std::endl; }
public:
	Button operator=(Button& other);
	Button operator=(Button&& other) noexcept;
private:
	std::string text;
public: 
	void textEd();
	std::string Text() { return text; }
	void ToolTipText() { std::cout << "Hint text :)" << std::endl; };
};
inline std::ostream& operator<<(std::ostream& os, Button b) {
	std::cout << " cin text: ";
	b.textEd();
	std::cout << std::endl;
	b.options();
	b.coordinates();
	std::cout << "Hint text: ";
	b.ToolTipText();
	std::cout << "Text :  " << b.Text();
	std::cout << std::endl;
	std::cout << "Height: " << b.height;
	std::cout << std::endl;
	std::cout << "Width: " << b.width;
	std::cout << std::endl;
	std::cout << "Coordinates: x =" << b.x << " y = " << b.y;
	std::cout << std::endl;
	if (b.visibility == true)
		std::cout << "Visible!";
	else
		std::cout << "Unvisible! ";
	std::cout << std::endl;
	return os;
}

