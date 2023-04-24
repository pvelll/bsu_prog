#include "Header.h"
void output_list(list <double> name)
{
	list<double>::iterator p = name.begin();
	while (p != name.end())
	{
		cout << *p << " ";
		++p;
	}
	cout << endl;
}

void sum_res(list <double> list1, list <double> list2)
{
	double elem = 0, elem2 = 0;
	list <double>::iterator fir = list1.begin();
	list <double>::reverse_iterator sec = list2.rbegin();
	double result = 1;
	while (fir != list1.end())
	{
		elem = *sec;
		elem2 = *fir;
		result *= elem - elem2;
		fir++;
		sec++;
	}
	cout << result;
}