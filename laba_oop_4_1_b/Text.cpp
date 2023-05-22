#include "Text.h"

char* Text::TextEd()
{
	char* text = new char[100];
	std::cout << "Input some text: " << std::endl;
	std::cin >> text;
	return text;
}

const char* Text::Color()
{
	
	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		const char* color = "red";
		return color;
	}
	case 2: {
		const char* color = "green";
		
		return color;
	}
	case 3: {
		const char* color = "blue";
		return color;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		Color();
	}
	}
}