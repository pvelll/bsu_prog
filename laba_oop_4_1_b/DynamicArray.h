#pragma once
#include "Base.h"
class DynamicArray {
public:
    // Конструктор по умолчанию
    DynamicArray() : size_(0), capacity_(0), data_(nullptr) {}

    // Конструктор копирования
    DynamicArray(const DynamicArray& other) : size_(other.size_), capacity_(other.capacity_), data_(new Base* [capacity_]) {
        for (int i = 0; i < size_; ++i) {
            data_[i] = other.data_[i];
        }
    }

    // Конструктор перемещения
    DynamicArray(DynamicArray&& other) noexcept : size_(other.size_), capacity_(other.capacity_), data_(other.data_) {
        other.size_ = 0;
        other.capacity_ = 0;
        other.data_ = nullptr;
    }

    // Деструктор
    ~DynamicArray() {
        for (int i = 0; i < size_; ++i) {
            delete data_[i];
        }
        delete[] data_;
    }

    // Оператор присваивания копированием
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            for (int i = 0; i < size_; ++i) {
                delete data_[i];
            }
            delete[] data_;
            size_ = other.size_;
            capacity_ = other.capacity_;
            data_ = new Base * [capacity_];
            for (int i = 0; i < size_; ++i) {
                data_[i] = other.data_[i];
            }
        }
        return *this;
    }

    // Оператор присваивания перемещением
    DynamicArray& operator=(DynamicArray&& other) noexcept {
        if (this != &other) {
            for (int i = 0; i < size_; ++i) {
                delete data_[i];
            }
            delete[] data_;
            size_ = other.size_;
            capacity_ = other.capacity_;
            data_ = other.data_;
            other.size_ = 0;
            other.capacity_ = 0;
            other.data_ = nullptr;
        }
        return *this;
    }

    // Метод для добавления объекта в массив
    void addObject(Base* value) {
        if (size_ == capacity_) {
            int newCapacity = (capacity_ == 0) ? 1 : capacity_ * 2;
            Base** newData = new Base * [newCapacity];
            std::copy(data_, data_ + size_, newData);
            delete[] data_;
            data_ = newData;
            capacity_ = newCapacity;
        }
        data_[size_] = value;
        ++size_;
    }

    // Метод для удаления объекта из массива
    void removeObject(int index) {
        if (index >= 0 && index < size_) {
            delete data_[index];
            for (int i = index; i < size_ - 1; ++i) {
                data_[i] = data_[i + 1];
            }
            --size_;
        }
    }

    // Метод для вывода элементов массива
    void print() const {
        for (int i = 0; i < size_; ++i) {
            data_[i]->Print();
        }
        std::cout << '\n';
    }

private:
    int size_;
    int capacity_;
    Base** data_;
};