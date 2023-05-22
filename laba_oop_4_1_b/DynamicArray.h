#pragma once
#include "Base.h"
class DynamicArray {
public:
    DynamicArray() = default;
    DynamicArray(const DynamicArray& other) : objects(other.objects) {}
    DynamicArray(DynamicArray&& other) noexcept : objects(std::move(other.objects)) {}
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            objects = other.objects;
        }
        return *this;
    }
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            objects = std::move(other.objects);
        }
        return *this;
    }
    ~DynamicArray() = default;

    void addObject(Base* obj) {
        objects.push_back(obj);
    }

    void output() {
        for (size_t i = 0; i < objects.size(); i++)
        {
            std::cout << objects[i] << " ";
        }
    }

    void removeObject(Base* obj) {
        objects.erase(std::remove(objects.begin(), objects.end(), obj), objects.end());
    }

private:
    std::vector<Base*> objects;
};

