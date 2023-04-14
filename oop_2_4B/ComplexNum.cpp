//#include "ComplexNum.h"
////
//void ComplexNum::sum()
//{
//	double x3 = x1 + x2;
//	double y3 = y1 + y2;
//	std::cout << "Answer: " << x3 << "i" << y3 << std::endl;
//}
//
//void ComplexNum::sub()
//{
//	double x3 = x1 - x2;
//	double y3 = y1 - y2;
//	std::cout << "Subtraction: " << x3 << " + " << y3 << "i" << std::endl;
//}
//
//void ComplexNum::mult()
//{
//	double a, b;
//	a = (((x1 * x2) + (y1 * y2)));
//	b = (((y1 * x2) + (x1 * y2)));
//	std::cout << "Multiplication: " << a << " + " << b << "i" << std::endl;
//}
//
//void ComplexNum::div()
//{
//	double a, b;
//	a = (((x1 * x2) - (y1 * y2)) / (pow(x2, 2) + pow(y2, 2)));
//	b = (((y1 * x2) + (x1 * y2)) / (pow(x2, 2) + pow(y2, 2)));
//	std::cout << "Divitration: " << a << " + " << b << "i" << std::endl;
//}
//
//void ComplexNum::degree(double n)
//{
//	double a, b, c, d;
//	a = pow(module, n) * cos(n * corner);
//	b = pow(module, n) * sin(n * corner);
//	c = pow(module2, n) * cos(n * corner2);
//	d = pow(module2, n) * sin(n * corner2);
//	std::cout << "the first number after exponentiation: " << a << " + " << b << "i" << std::endl;
//	std::cout << "the second number after exponentiation: " << c << " + " << d << "i" << std::endl;
//}
//
//void ComplexNum::root()
//{
//	double a, b, c, d;
//	a = pow(module, 0.5) * cos(0.5 * corner);
//	b = pow(module, 0.5) * sin(0.5 * corner);
//	c = pow(module2, 0.5) * cos(0.5 * corner2);
//	d = pow(module2, 0.5) * sin(0.5 * corner2);
//	std::cout << "the first number after getting sqr root: " << a << " + " << b << "i" << std::endl;
//	std::cout << "the second number after getting sqr root: " << c << " + " << d << "i" << std::endl;
//}

//ComplexNum::ComplexNum(ComplexNum& other) noexcept
//{
//	if (this != &other) {
//		module = other.module;
//		corner = other.corner;
//		module2 = other.module2;
//		corner2 = other.corner2;
//		
//	}
//
//}
//
//ComplexNum::ComplexNum(ComplexNum&& other) noexcept
//{
//	if (this != &other) {
//		module = other.module;
//		corner = other.corner;
//		module2 = other.module2;
//		corner2 = other.corner2;
//	}
//}
//
//ComplexNum ComplexNum::operator=(ComplexNum& other)
//{
//	if (this != &other) {
//		module = other.module;
//		corner = other.corner;
//		module2 = other.module2;
//		corner2 = other.corner2;
//
//	}
//	return other;
//}
//
//ComplexNum ComplexNum::operator=(ComplexNum&& other) noexcept
//{
//	if (this != &other) {
//		module = other.module;
//		corner = other.corner;
//		module2 = other.module2;
//		corner2 = other.corner2;
//
//	}
//	return other;
//}
