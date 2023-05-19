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
	Button virtual operator=(Button& other);
	Button virtual operator=(Button&& other) noexcept;
private:
	std::string text;

public: 
	void print()override;
	void virtual textEd();
	std::string virtual Text() { return text; }
	void virtual ToolTipText() { std::cout << "Hint text :)" << std::endl; };
};

