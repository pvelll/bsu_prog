#include "Header.h"

void enter(int N, LinkedList<int>& lst) {
    int N2 = 2 * N;
    double input;
    for (int i = 0; i < N2; i++) {
        cout << "a" << i + 1 << " ";
        cin >> input;
        lst.push_back(input);
    }
}

int task(LinkedList<int>& lst) {
    int answ = 1;
    while (lst.head->next != lst.tail) {
        answ *= (lst.head->data - lst.tail->data);
        lst.pop_back();
        lst.pop_front();

    }

    return answ;
}