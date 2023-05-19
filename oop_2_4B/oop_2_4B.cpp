// oop_2_4B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Header.h"

int main()
{
	ComplexNum nums = Initialization();
	nums.sum();
	nums.sub();
	nums.div();
	nums.mult();
	int k;
	cout << "Input degree you want to exponentation: " << endl;
	cin >> k;
	nums.degree(k);
	nums.root();
}

