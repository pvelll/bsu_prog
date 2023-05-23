#pragma once
#include "Base.h"
class Button : public Base
{
	char text[100];
public:
	Button(); //without
	Button(int, int, int, int, char*); //params
	Button(Button& other); //cope
	Button(Button&& other) noexcept; //move
	virtual ~Button() override { std::cout << "destructor" << std::endl; }

	Button virtual operator=(Button& other);
	Button virtual operator=(Button&& other) noexcept;

	void print()override;
	void  setText(char* t);
	void  toolTipText() { std::cout << "Hint text :)" << std::endl; };	
};

