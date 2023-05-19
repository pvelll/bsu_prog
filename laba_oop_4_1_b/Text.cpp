#include "Text.h"

std::string Base_Text::Text()
{
	std::string text;
	std::cout << "Input some text " << std::endl;
	std::cin >> text;
	return text;
}

std::string Base_Text::Color()
{
	std::string color;
	std::cout << "Choose the color: " << std::endl << "1 - red" << std::endl << "2 - green" << std::endl << "3 - blue" << std::endl;
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1: {
		color = "red";
		return color;
	}
	case 2: {
		color = "green";
		return color;
	}
	case 3: {
		color = "blue";
		return color;
	}
	default: {
		std::cout << "error 404  - try again " << std::endl;
		return 0;
	}
	}
}