#pragma once
#include "Base.h"
class DynamicArray {
private:
    Base** objects;
    int size;
    int capacity = 0;
public:
    DynamicArray() : objects(nullptr), size(0) {}
    DynamicArray(int size) : objects(new Base* [size]), size(size) {}
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();  

    DynamicArray& operator=(const DynamicArray& other);
    Base& operator[](int index);

    int getSize();
    void addObject(Base* element);
    void remove(int index);
 
};
