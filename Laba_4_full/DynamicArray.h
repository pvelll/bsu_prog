#pragma once
#include "Base.h"
class DynamicArray {
private:
    Base** elements;
    int size;
    int realSize = 0;
public:
    DynamicArray() : elements(nullptr), size(0) {}
    DynamicArray(int size) : elements(new Base* [size]), size(size) {}
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();  

    DynamicArray& operator=(const DynamicArray& other);
    Base& operator[](int index);

    int getsize();
    void addObject(Base* element);
    void remove(int ind);
};
