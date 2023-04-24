#include<vector>
#include<iostream>
#include<ctime>
#include <algorithm>
using namespace std;
vector<int> min_diagonal_elements(const vector<vector<int>>& matrix) {
	int n = matrix.size();
	vector<int> result(2 * n - 1);
	for (int i = 0; i < n; i++) {
		int min_diag = matrix[i][i];
		int min_antidiag = matrix[i][n - 1 - i];
		for (int j = 0; j < n; j++) {
			if (i != j) {
				min_diag = min(min_diag, matrix[i][j]);
				min_antidiag = min(min_antidiag, matrix[j][n - 1 - i]);
			}
		}
		result[i] = min_diag;
		result[2 * n - 2 - i] = min_antidiag;
	}
	return result;
}
int main() {
	int choice;
	cout << "Choose the task ";
	cin >> choice;
	switch (choice) {
	case 1: {
		vector<int> vec;
		vector<int> res;
		int size;
		cout << "Input array size: ";
		cin >> size;
		srand(time(NULL));
		for (size_t i = 0; i < size; i++)
		{
			int k = rand() % 10;
			vec.push_back(k);
		}
		cout << "Array before" << endl;
		for (size_t i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
		sort(vec.begin(), vec.end());
		cout << endl;

		for (int i = 0; i < vec.size(); i++) {
			for (size_t j = 1; j < vec.size() - i; j++)
			{
				if (vec[i] == vec[i + j])
					res.push_back(vec[i]);
			}
		}
		auto last = unique(res.begin(), res.end());
		res.erase(last, res.end());
		cout << "Array after: " << endl;
		for (size_t i = 0; i < res.size(); i++)
		{
			cout << res[i];
		}
		break;
	}
	case 2: {
		int n;
		cout << "Enter matrix size: ";
		cin >> n;
		vector < vector <int> > matrix(n, vector <int>(n)); // Объявление вектора на n строк по m элементов 

		for (int i = 0; i < n; i++)     // Цикл, который идёт по строкам
			for (int j = 0; j < n; j++) // Цикл, который идёт по элементам
			{
				matrix[i][j] = rand()%10; // Заполнение вектора или массива (в данном случае ввод)
			}

		for (int i = 0; i < n; i++) // Цикл, который идёт по строкам
		{
			for (int j = 0; j < n; j++) // Цикл, который идёт по элементам
				cout << matrix[i][j] << ' '; // Вывод элементов i строки вектора
			cout << endl;
		}
		vector<int> res = min_diagonal_elements(matrix);
		for (size_t i = 0; i < res.size(); i++)
		{
			cout << res[i] << " ";
		}
	}


	}
}