#include "DynamicArray.h"


DynamicArray::~DynamicArray()
{
    for (int i = 0; i < size; ++i) {
        delete objects[i];
    }
    delete[] objects;
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other)
{
    if (this != &other) {
        for (int i = 0; i < size; ++i) {
            delete objects[i];
        }
        delete[] objects;
        size = other.size;
        capacity = other.capacity;
        objects = new Base * [capacity];
        for (int i = 0; i < size; ++i) {
            objects[i] = other.objects[i];
        }
    }
    return *this;
}

DynamicArray& DynamicArray::operator=(DynamicArray&& other) noexcept
{
    if (this != &other) {
        for (int i = 0; i < size; ++i) {
            delete objects[i];
        }
        delete[] objects;
        size = other.size;
        capacity = other.capacity;
        objects = other.objects;
        other.size = 0;
        other.capacity = 0;
        other.objects = nullptr;
    }
    return *this;
}

void DynamicArray::addObject(Base* value)
{
    if (size == capacity) {
        int newCapacity = (capacity == 0) ? 1 : capacity * 2;
        Base** newData = new Base * [newCapacity];
        std::copy(objects, objects + size, newData);
        delete[] objects;
        objects = newData;
        capacity = newCapacity;
    }
    objects[size] = value;
    ++size;
}

void DynamicArray::removeObject(int index)

    {
        if (index >= 0 && index < size) {
            delete objects[index];
            for (int i = index; i < size - 1; ++i) {
                objects[i] = objects[i + 1];
            }
            --size;
        }
    }


void DynamicArray::printObj() const
    {
        for (int i = 0; i < size; ++i) {
            objects[i]->print();
        }
        std::cout << std::endl;
    }
