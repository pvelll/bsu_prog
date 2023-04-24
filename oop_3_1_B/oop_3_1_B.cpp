#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool isVowel(char c) {
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int countVowels(const std::string& str) {
	int count = 0;
	for (char c : str) {
		if (isVowel(c)) {
			count++;
		}
	}
	return count;
}

int main() {
	int choice;
	cout << "Choose the solution ";
	cin >> choice;
	switch (choice) {
	case 1: {
		string text;
		cin >> text;

		unordered_map<char, int> charCount;
		for (char c : text) {
			charCount[c]++;
		}

		string result;
		for (char c : text) {
			if (charCount[c] > 2 || charCount[c] == 1) {
				result += c;
			}
		}

		cout << result << endl;

		break;
	}
	case 2: {
		string hex;
		cin >> hex;

		int decimal = 0;

		for (int i = 0; i < hex.length(); i++) {
			char c = hex[i];
			int digit;

			if (c >= '0' && c <= '9') {
				digit = c - '0';
			}
			else if (c >= 'A' && c <= 'F') {
				digit = c - 'A' + 10;
			}
			else if (c >= 'a' && c <= 'f') {
				digit = c - 'a' + 10;
			}
			else {
				cout << "Incorrect symbol: " << c << endl;
				return 0;
			}

			decimal += digit * pow(16, hex.length() - i - 1);
		}

		cout << decimal << endl;
		break;
	}
	case 3: {
		string input;
		cin >> input;
		vector<string> words;
		string currentWord;
		for (char c : input) {
			if (c == ' ') {
				if (!currentWord.empty()) {
					words.push_back(currentWord);
					currentWord.clear();
				}
			}
			else {
				currentWord += c;
			}
		}
		if (!currentWord.empty()) {
			words.push_back(currentWord);
		}

		int maxVowels = 0;
		for (const string& word : words) {
			int vowelCount = countVowels(word);
			if (vowelCount > maxVowels) {
				maxVowels = vowelCount;
			}
		}

		for (const string& word : words) {
			if (countVowels(word) == maxVowels) {
				for (size_t i = 0; i < words.size(); i++)
				{
					cout << words[i] << endl;
				}
			}
		}

		break;
	}
	}

}










