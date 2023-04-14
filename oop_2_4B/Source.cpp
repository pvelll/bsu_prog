#include"Header.h"
ComplexNum Initialization() 
{
    cout << "Choose the method of initializaing your nums(modulus*(cos(angle) + i*sin(angle)))(1 - by constructor, 2 - standart)" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
    case choice1: {
        int modulus1;
        cout << "Input first modulus: ";
        cin >> modulus1;
        int angle1;
        cout << endl << "Input first angle: ";
        cin >> angle1;
        int modulus2;
        cout << endl << "Input second modulus: ";
        cin >> modulus2;
        int angle2;
        cout << endl << "Input second angle: ";
        cin >> angle2;
        ComplexNum qwe(modulus1, angle1, modulus2, angle2);
        cout << qwe;
        return qwe;
        break;
    }
    case choice2: {
        ComplexNum qwe;
        cout << "Input first modulus: ";
        cin >> qwe.module;
        cout << endl << "Input first angle: ";
        cin >> qwe.corner;
        cout << endl << "Input second modulus: ";
        cin >> qwe.module2;
        cout << endl << "Input second angle: ";
        cin >> qwe.corner2;
        cout << qwe;
        return qwe;
        break;
    }

    }
    
}