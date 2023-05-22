// laba_oop_4_1_b.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Base.h"
#include "Text.h"
#include "Ellipse.h"
#include "Button.h"
#include "HyperlinkLabel.h"
#include "TextBox.h"
#include "DynamicArray.h"

// массив из 4.2 делает не совсем то, что надо, хранит в себе ячейку памяти в которой хранится объект класса, скажи что можешь оргинизовать эту хуету, только с другими классами, бо с этими нужно было чуть раньше думать чтобы эту ебалу организовать, бо бля нереально нахуй

int main()
{
	int choice;
	std::cout << "Input 1 to try Ellipse " << std::endl << "Input 2 to try HypetLinkLabel " << std::endl << "Input 3 to try TextBox " << std::endl << "Input 4 to try Button" << std::endl;
	std::cin >> choice;
	DynamicArray da;
	switch (choice) {
	case 1: {
		Ellipse el;
		std::cout << el;
		/*da.addObject(new Ellipse);*/
		break;
	}
	case 2: {
		HyperlinkLabel hl;
		std::cout << hl;
		/*da.addObject(new Base_Text);*/
		break;
	}
	case 3: {
		TextBox tb;
		std::cout << tb;
		/*da.addObject(new Base_Text);*/
		break;
	}
	case 4: {
		Button b;
		std::cout << b;
		/*da.addObject(new Button);
		da.output();*/

		break;
	}
	default: {
		std::cout << "error 404, try again" << std::endl;
		return 0;
	}
	}

}

//1. Ellipse – рисует вписанный в рамки элемента управления эллипс
//• Visible - отображается элемент управления или скрыт(bool) !
//• FillColor – цвет заливки !
//• BorderColor – цвет контура1\
//• Координаты X и Y !
//• Размеры высота и ширина элемента управления!
//2. HyperlinkLabel – при нажатии мышкой обеспечивает переход по гиперссылке
//• Text - текст в текстовом поле
//• Color - цвет текста элемента управления
//• Visible - отображается элемент управления или скрыт(bool) !
//• Координаты X и Y!
//• Размеры высота и ширина элемента управления
//• URL – адрес ссылки для перехода(строка)
//3. TextBox - текстовое поле, позволяет пользователю вводить текст
//• Text - текущий текст в текстовом поле
//• Color - цвет текста элемента управления
//• Readonly – запрещает редактирование текста пользователем(bool)
//• Visible - отображается элемент управления или скрыт(bool) !
//• Координаты X и Y!
//• Размеры высота и ширина элемента управления
//4. Button – кнопка
//• Text - текущий текст на кнопке
//• ToolTipText - текст, появляющийся в подсказке при наведении мышки на
//кнопку
//• Visible - отображается элемент управления или скрыт(bool) !
//• Координаты X и Y !
//• Размеры высота и ширина элемента управления