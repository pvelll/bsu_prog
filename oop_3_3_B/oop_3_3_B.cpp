#include"Header.h"
#include <algorithm>

int main() {
    int choice;
    cout << "Choose program: ";
    cin >> choice;
    switch (choice) {
    case qwe: {/*
        list<char> L1 = { 'a', 'b', 'c', 'f', 'e', 'w', 'r' };
        list<char> L2 = { 'b', 'c', 'd', 'f', 'e', 'g', 'r' };

        list<char> merged = merge_lists(L1, L2);
        cout << "First List :" << endl;
        for (const auto& elem : L2) {
            std::cout << elem << " ";
        }
        cout << endl << "Second List: " << endl;
        for (const auto& elem : L1) {
            std::cout << elem << " ";
        }
        cout << endl << "Final List: " << endl;
        for (const auto& elem : merged) {
            std::cout << elem << " ";
        }
        break;*/
        forward_list<char> L1 = { 'a', 'b', 'c', 'f', 'e', 'w', 'r' };
        forward_list<char> L2 = { 'b', 'c', 'd', 'f', 'e', 'g', 'r' };
        forward_list<char> L;

        for (char c : L1) {
            if (find(L.begin(), L.end(), c) == L.end()) {
                L.push_front(c);
            }
        }
        for (char c : L2) {
            if (find(L.begin(), L.end(), c) == L.end()) {
                L.push_front(c);
            }
        }
        cout << "First List :" << endl;
        for (const auto& elem : L2) {
            std::cout << elem << " ";
        }
        cout << endl << "Second List: " << endl;
        for (const auto& elem : L1) {
            std::cout << elem << " ";
        }
        cout << endl << "Final List: " << endl;
        for (const auto& elem : L) {
            std::cout << elem << " ";
        }
        cout << endl;
        break;
    }
    case asd: {
        srand(time(NULL));
        int n = 0;
        double v, l;
        cout << "Enter n: ";
        cin >> n;
        list <double> list1, list2;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            cin >> l;
            list1.push_back(v);
            list2.push_back(l);
        }
        output_list(list1);
        output_list(list2);
        sum_res(list1, list2);
        return 0;
    }
    default:
        cout << endl << "Eror 404";
    }
    

    return 0;
}