// oop.1.2b.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <stack>
#include<cmath>
using namespace std;
fstream fin("data.txt", std::ios::in);
fstream fout("data2.bin", std::ios::out, std::ios::binary);


void reading_file(stack<int>& Stack, stack<int>& Stack2, fstream &fin, fstream &fout);
void closing(fstream& fin, fstream& fout);


int main()
{
	stack<int> Stack;
	stack<int> Stack2;
	reading_file(Stack,  Stack2, fin,fout);
	closing(fin, fout);
}
void reading_file(stack<int>& Stack, stack<int>& Stack2, fstream& fin, fstream& fout) {
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
	while (!Stack.empty())
	{
		int value = Stack.top();
		fout.write(reinterpret_cast <char*>(&value), sizeof(int));
		value = Stack2.top();
		fout.write(reinterpret_cast <char*>(&value), sizeof(int));
		Stack.pop();
		Stack2.pop();
	}
}
void closing(fstream& fin, fstream& fout) {
	fin.close();
	fout.close();
}