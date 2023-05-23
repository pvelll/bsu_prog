#pragma once
#include "Base.h"
class DynamicArray {
    int size;
    int capacity;
    Base** objects;
public:
    DynamicArray() : size(0), capacity(0), objects(nullptr) {}
    DynamicArray(const DynamicArray& other) : size(other.size), capacity(other.capacity), objects(new Base* [capacity]) {
        for (int i = 0; i < size; ++i) {
            objects[i] = other.objects[i];
        }
    }
    DynamicArray(DynamicArray&& other) noexcept : size(other.size), capacity(other.capacity), objects(other.objects) {
        other.size = 0;
        other.capacity = 0;
        other.objects = nullptr;
    }
    ~DynamicArray();

    DynamicArray& operator=(const DynamicArray& other);
    DynamicArray& operator=(DynamicArray&& other) noexcept;

    void addObject(Base* value);
    void removeObject(int index);
    void printObj() const; 
};