#pragma once
#include <iostream>
#include <memory>
#include "Base.h"

#include <iostream>
#include <memory>

template <typename T>
class List {
private:
    struct Node {
        std::unique_ptr<T> data;
        std::unique_ptr<Node> next;
        Node(std::unique_ptr<T> data) : data(std::move(data)), next(nullptr) {}
    };
    std::unique_ptr<Node> head;

public:
    List() : head(nullptr) {}

    // Rule of Five
    ~List() = default;
    List(const List& other) = delete;
    List& operator=(const List& other) = delete;
    List(List&& other) noexcept = default;
    List& operator=(List&& other) noexcept = default;

    void pushFront(std::unique_ptr<T> data) {
        auto new_node = std::make_unique<Node>(std::move(data));
        new_node->next = std::move(head);
        head = std::move(new_node);
    }

    void popFront() {
        if (head != nullptr) {
            head = std::move(head->next);
        }
    }

    void display() const {
        for (auto current = head.get(); current != nullptr; current = current->next.get()) {
            std::cout << *(current->data) << ' ';
        }
        std::cout << '\n';
    }

    void clear() {
        while (head != nullptr) {
            popFront();
        }
    }

    List copy() const {
        List new_list;
        for (auto current = head.get(); current != nullptr; current = current->next.get()) {
            new_list.pushFront(std::make_unique<T>(*(current->data)));
        }
        return new_list;
    }
};