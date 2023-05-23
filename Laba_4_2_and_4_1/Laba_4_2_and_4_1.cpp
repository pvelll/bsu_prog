#include "Base.h"
#include "Text.h"
#include "Ellipse.h"
#include "Button.h"
#include "HyperlinkLabel.h"
#include "TextBox.h"
#include "DynamicArray.h"

// что сделано, 1 изменены названия, 2 для каждого поля есть свой get и set, 3 полностью переделал конструкторы
// 4 у всех классов одиноковый порядок (1 поля, 2 конструкторы и деструктор, 3 операторы,4 методы,5 дружественные функции)
// 5 убрал инициализацию внутри класса, 6 мелкие изменения в методах

int main()
{
	std::cout << "Choose solution: " << std::endl << "1 - laba 4.1" << std::endl << "2 - laba 4.2" << std::endl;
	int choice2;
	std::cin >> choice2;
	switch (choice2) {
	case 1: {
		begin:
		int choice;
		std::cout << "Input 1 to try Ellipse " << std::endl << "Input 2 to try HypetLinkLabel " << std::endl << "Input 3 to try TextBox " << std::endl << "Input 4 to try Button" << std::endl;
		std::cin >> choice;
		DynamicArray da;
		switch (choice) {
		case 1: {
			Ellipse el;
			std::cout << el;
			break;
		}
		case 2: {
			HyperlinkLabel hl;
			std::cout << hl;
			break;
		}
		case 3: {
			TextBox tb;
			std::cout << tb;
			break;
		}
		case 4: {
			Button b;
			std::cout << b;

			break;
		}
		default: {
			std::cout << "error 404, try again" << std::endl;
			goto begin; // дейкстра бы не оценил, я другого способа не нашел, отдельно функции писать лень...
		}
		}
		break;
	}
	case 2:
	{
		DynamicArray da;
		std::cout << "Dinamic array automatically added all abjects " << std::endl;
		Ellipse el;
		HyperlinkLabel hll;
		TextBox tb;
		Button b;
		da.addObject(new Ellipse);
		da.addObject(new HyperlinkLabel);
		da.addObject(new TextBox);
		da.addObject(new Button);
		da.printObj();
		break;
	}
	default:
	{
		std::cout << "Error 404 try again " << std::endl;
		main();
	}
	}


}