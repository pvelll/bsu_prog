#include"Header.h"

int main()
{
    
    List<int> filling1;
    List<int> filling2;
    List<int> finalList;
    cout << "Input size of lists" << endl;
    int size;
    cin >> size;
    filling(filling1, filling2, size);
    cout << "First List:" << endl;
    printList(filling1, size);
    cout << endl <<"Second List:" << endl;
    printList(filling2, size);
    check_and_fill(filling1, filling2, finalList, size);
    cout << endl <<"Final list:" << endl;
    printList(finalList, size);
   
    

}

