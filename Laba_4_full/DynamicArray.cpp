#include "DynamicArray.h"


DynamicArray::DynamicArray(const DynamicArray& other) : objects(new Base* [other.size]), size(other.size) {
    for (int i = 0; i < size; i++) {
        objects[i] = other.objects[i];
    }
    capacity = other.capacity;
}

DynamicArray::~DynamicArray() {
    for (int i = 0; i < capacity; i++) {
        delete objects[i];
    }
    delete[] objects;
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other) {
    if (this != &other) {
        delete[] objects;
        objects = new Base * [other.size];
        size = other.size;
        for (int i = 0; i < size; i++) {
            objects[i] = other.objects[i];
        }
        capacity = other.capacity;
    }
    return *this;
}

Base& DynamicArray::operator[](int index) {
    if (index >= capacity) {
        throw "fuck";
    }
    return *objects[index];
}

int DynamicArray::getSize() {
    return capacity;
}


void DynamicArray::addObject(Base* element) {
    if (capacity == size) {
        Base** tmp = new Base * [size + 1];
        for (int i = 0; i < capacity; i++) {
            tmp[i] = objects[i];
        }
        tmp[capacity] = element;
        delete[] objects;
        objects = tmp;
        size++;
        capacity++;
        return;
    }
    objects[capacity] = element;
    capacity++;
}

void DynamicArray::remove(int index) {
    delete objects[index];
    size--;
    capacity--;
    for (int i = index; i < capacity; i++) {
        objects[i] = objects[i + 1];
    }
}

