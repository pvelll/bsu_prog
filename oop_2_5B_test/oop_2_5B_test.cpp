#include "Tree.h"


int main() {
    Tree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);
    tree.insert(8);
    tree.insert(1);
    tree.insert(7);
    tree.insert(3);
    tree.insert(9);
    tree.insert(4);
    tree.insert(0);
    

    cout << "Level 1: ";
    tree.printLevelOrder(1);
    cout << endl;

    cout << "Level 2: ";
    tree.printLevelOrder(2);
    cout << endl;

    cout << "Level 3: ";
    tree.printLevelOrder(3);
    cout << endl;
    cout << "Level 4: ";
    tree.printLevelOrder(4);
    cout << endl;
    cout << "Input Number of element you wanted: ";
    int l;
    cin >> l;
    cout << endl <<tree[l];
    return 0;
}