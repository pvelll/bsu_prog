#pragma once
#include <iostream>
#include <memory>
#include "Base.h"

#include <iostream>
#include <memory>

template <typename T>
class List {
    struct Node {
        std::unique_ptr<T> data;
        Node* next;
        Node(std::unique_ptr<T> data, Node* next = nullptr) : data(std::move(data)), next(next) {}
    };
    Node* head;
public:
    List() : head(nullptr) {}
    List(const List& other) : head(nullptr) {
        Node** current = &head;
        for (Node* temp = other.head; temp != nullptr; temp = temp->next) {
            *current = new Node(std::make_unique<T>(*temp->data));
            current = &(*current)->next;
        }
    }
    List(List&& other) noexcept : head(other.head) {
        other.head = nullptr;
    }
    ~List() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    List& operator=(const List& other) {
        if (this != &other) {
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            Node** current = &head;
            for (Node* temp = other.head; temp != nullptr; temp = temp->next) {
                *current = new Node(std::make_unique<T>(*temp->data));
                current = &(*current)->next;
            }
        }
        return *this;
    }

    List& operator=(List&& other) noexcept {
        if (this != &other) {
            while (head != nullptr) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
            head = other.head;
            other.head = nullptr;
        }
        return *this;
    }

    void addObject(std::unique_ptr<T> value) {
        if (head == nullptr) {
            head = new Node(std::move(value));
        }
        else {
            Node* current = head;
            while (current->next != nullptr)
                current = current->next;
            current->next = new Node(std::move(value));
        }
    }

    void removeObject(int index) {
        if (index == 0 && head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else if (index > 0 && head != nullptr) {
            Node* current = head;
            for (int i = 0; i < index - 1 && current->next != nullptr; ++i)
                current = current->next;

            if (current->next != nullptr) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
        }
    }

    void input() {
        for (Node* current = head; current != nullptr; current = current->next)
            current->data->input();
    }

    void print() const {
        for (Node* current = head; current != nullptr; current = current->next)
            current->data->print();
    }
};
