#include "DynamicArray.h"


DynamicArray::DynamicArray(const DynamicArray& other) : elements(new Base* [other.size]), size(other.size) {
    for (int i = 0; i < size; i++) {
        elements[i] = other.elements[i];
    }
    realSize = other.realSize;
}

DynamicArray::~DynamicArray() {
    for (int i = 0; i < realSize; i++) {
        delete elements[i];
    }
    delete[] elements;
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
    if (this != &other) {
        delete[] elements;
        elements = new Base * [other.size];
        size = other.size;
        for (int i = 0; i < size; i++) {
            elements[i] = other.elements[i];
        }
        realSize = other.realSize;
    }
    return *this;
}

Base& DynamicArray::operator[](int index) {
    if (index >= realSize) {
        throw "fuck";
    }
    return *elements[index];
}

int DynamicArray::getsize() {
    return realSize;
}


void DynamicArray::addObject(Base* element) {
    if (realSize == size) {
        Base** newElements = new Base * [size + 1];
        for (int i = 0; i < realSize; i++) {
            newElements[i] = elements[i];
        }
        newElements[realSize] = element;
        delete[] elements;
        elements = newElements;
        size++;
        realSize++;
        return;
    }
    elements[realSize] = element;
    realSize++;
}

void DynamicArray::remove(int ind) {
    delete elements[ind];
    size--;
    realSize--;
    for (int i = ind; i < realSize; i++) {
        elements[i] = elements[i + 1];
    }
}
