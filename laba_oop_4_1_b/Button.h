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

	Button virtual operator=(Button& other);
	Button virtual operator=(Button&& other) noexcept;
private:
	char text[100];

public: 
	void Print()override;
	void  setText(char *t);
	void  ToolTipText() { std::cout << "Hint text :)" << std::endl; };
};

