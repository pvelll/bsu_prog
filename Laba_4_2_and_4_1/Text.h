#pragma once
#include "Base.h"
class Text : public Base
{
protected:
    char* txt;
    const char* clr;

    Text();
    Text(int, int, int, int, char*, const char*);
    Text(Text& other);
    Text(Text&& other) noexcept;
    ~Text() = default;

    Text& operator=(Text& other);
    Text& operator=(Text&& other) noexcept;
    

    void textEd();
    void chooseColor();

    
};

