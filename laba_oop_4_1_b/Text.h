#pragma once
#include "Base.h"
class Text : public Base
{protected:
    Text() = default;
    Text(const Text& other)  {}
    Text(Text&& other) noexcept{}
    Text& operator=(const Text& other) {}
    Text& operator=(Text&& other) noexcept {}
    ~Text() = default;

	char* TextEd();
	const char* Color();

    char* txt = TextEd();
    const char* clr = Color();
};

