#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Student {
    string name;
    string dateOfBirth;
    int course;
    float gpa;
};
struct Node {
    Student student;
    Node* next;
};
int counter(fstream& lines);
void insert(Node*& head, Student student);
void printList(Node*);
void printList(Node*, fstream&);
Node* getStudentsByCourse(Node*& head, int course);
void deleteList(Node*& head);

