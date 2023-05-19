#pragma once
#include "Base.h"
class Base_Text : public Base
{
public:
    Base_Text() = default;
    Base_Text(const Base_Text& other)  {}
    Base_Text(Base_Text&& other) noexcept{}
    Base_Text& operator=(const Base_Text& other) {}
    Base_Text& operator=(Base_Text&& other) noexcept {}
    ~Base_Text() = default;
public:
	std::string Text();
	std::string Color();
protected:
    std::string txt = Text();
    std::string clr = Color();
};

