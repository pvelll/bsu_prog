// oop_1_1B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stack>
#include <cmath>

using namespace std;
fstream fin("data.txt", ios::in);
fstream fout("data2.txt", ios::out);
int main()
{
	stack<int> Stack;
	stack<int> Stack2;
	
	if (fin.is_open()) {
		int tmp;
		while (fin >> tmp) {
			if (tmp / abs(tmp) == -1)
			{
				Stack.push(tmp);
			}
			if (tmp / abs(tmp) == 1)
			{
				Stack2.push(tmp);
			}
			cout << tmp << " ";
		}
	}	
 while (!Stack.empty() && !Stack2.empty())
 {
	 fout << Stack.top()<< " ";
	 fout << Stack2.top()<< " ";
	  Stack.pop();
	  Stack2.pop();
 }
	fin.close();
	fout.close();



}


