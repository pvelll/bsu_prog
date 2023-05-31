#pragma once
#include "Base.h"
class Text : public Base
{
protected:
    char* txt;
    const char* clr;

    Text();
    Text(int, int, int, int, char*, const char*);
    Text(const Text& other);
    Text(Text&& other) noexcept;
    ~Text() = default;

    Text& operator=(const Text& other);
    Text& operator=(Text&& other) noexcept;
    

    void textEd();
    void chooseColor();

    
};

