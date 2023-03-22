// oop_1_4B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include"Header.hpp"
int main() {

    Node* head = nullptr;

    fstream fin("data.txt",  ios::in);
    fstream lines("data.txt", ios::in);
    fstream fout("outData.bin", ios::out, std::ios::binary);


    int count = counter(lines);
    cout << "Number of students: " << count << endl;
    if (fin.is_open()) {
        string name;
        string birtnday;
        int course;
        float marks;
        for (int i = 1; i <= count; i++) {
            fin >> name;
            fin >> birtnday;
            fin >> course;
            fin >> marks;
            insert(head, { name, birtnday, course, marks });
        }
    }

    cout << "Original List:" << endl;
    printList(head);
    int n;
    cout << "Enter Course" << endl;
    cin >> n;
    Node* courseList = getStudentsByCourse(head, n);
    cout << "Course " << n << " List:" << endl;;
    printList(courseList, fout);
    cout << endl;
    cout << "Remaining List:" << endl;
    printList(head);
    deleteList(head);
    deleteList(courseList);
    fin.close();
    fout.close();
    return 0;
}