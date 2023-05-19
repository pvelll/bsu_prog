#include"Header.h"
void filling(List<int>& filling1, List<int>& filling2, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        int k = rand() % 20;
        int m = rand() % 20;
        filling1.pushBack(k);
        filling2.pushBack(m);
    }
}

void check_and_fill(List<int>& filling1, List<int>& filling2, List<int>& finalList, int size)
{
    for (int i = 0; i < filling1.GetSize(); i++)
    {
        finalList.pushBack(filling1[i]);
        finalList.pushBack(filling2[i]);
    }
    for (int i = 0; i < finalList.GetSize(); i++)
    {
        for (int j = 0; j < finalList.GetSize(); j++)
        {
            if (finalList[i] == finalList[j])
                finalList.remove(j);
        }
    }
}
        
void printList(List<int>& lst, int size) 
{
    for (int i = 0; i < lst.GetSize(); i++)
    {
        cout << lst[i] << " ";
    }
}
