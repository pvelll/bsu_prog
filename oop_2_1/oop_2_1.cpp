// oop_2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Header.h"
using namespace std;
int main() {
    Vector<int> vector;
    
    int k;
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        vector.pushBack(i);
    }
    std::cout << vector << std::endl;
    cout << *vector.end() << endl;
    for(int i = 0 ; i < k; i++)
    vector.remove(i);
    
    cout << vector;

    return 0;
}