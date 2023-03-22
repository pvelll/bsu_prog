#include"Header.hpp"

int counter(fstream& lines)
{
    int quantity = 0;
    while (true)
    {
        string v;
        getline(lines, v);
        if (!lines.eof())
            quantity++;
        else
            break;
    }
    int count = quantity / 4 ;
    return count;
}

void insert(Node*& head, Student student) {
    Node* newNode = new Node;
    newNode->student = student;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    if (student.name < head->student.name) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->student.name < student.name) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << "Name: " << head->student.name << ", Date of birth: " << head->student.dateOfBirth << ", Course: " << head->student.course << ", Marks: " << head->student.gpa << endl;
        head = head->next;
    }
}
void printList(Node* head, fstream& fout) {
    cout << "u can see them in the file" << endl;
    while (head != nullptr) {
        cout << "Name: " << head->student.name << ", Date of birth: " << head->student.dateOfBirth << ", Course: " << head->student.course << ", Marks: " << head->student.gpa << endl;
        fout << "Name: " << head->student.name << ", Date of birth: " << head->student.dateOfBirth << ", Course: " << head->student.course << ", Marks: " << head->student.gpa << endl;
        head = head->next;
    }
}

Node* getStudentsByCourse(Node*& head, int course) {
    Node* courseHead = nullptr;
    Node** current = &head;

    while (*current != nullptr) {
        if ((*current)->student.course == course) {
            Node* tmp = *current;
            *current = (*current)->next;
            tmp->next = nullptr;
            insert(courseHead, tmp->student);
        }
        else {
            current = &((*current)->next);
        }
    }

    return courseHead;
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}
