#pragma once
#include <fstream>
#include<iostream>
#include<cmath>

using namespace std;
class ComplexNum
{
public:
	double module;
	double corner;
	double module2;
	double corner2;

public:
	ComplexNum(double r, double fi, double r2, double fi2) : module(r), corner(fi), module2(r2), corner2(fi2) {}
	ComplexNum() :module(0), corner(0), module2(0), corner2(0) {};
	~ComplexNum() {};
	ComplexNum(ComplexNum& other) noexcept;
	ComplexNum(ComplexNum&& other)noexcept;
	ComplexNum operator=(ComplexNum& other);
	ComplexNum operator=(ComplexNum&& other)noexcept;

	void sum() {
		double x1 = module * cos(corner);
		double y1 = module * sin(corner);
		double x2 = module2 * cos(corner2);
		double y2 = module2 * sin(corner2);
		double x3 = x1 + x2;
		double y3 = y1 + y2;
		std::cout << "Sum: " << x3 << " + " << y3 << "i" << std::endl;
	}
	void sub() {
		double x1 = module * cos(corner);
		double y1 = module * sin(corner);
		double x2 = module2 * cos(corner2);
		double y2 = module2 * sin(corner2);
		double x3 = x1 - x2;
		double y3 = y1 - y2;
		std::cout << "Subtraction: " << x3 << " + " << y3 << "i" << std::endl;
	}
	void mult() {
		double x1 = module * cos(corner);
		double y1 = module * sin(corner);
		double x2 = module2 * cos(corner2);
		double y2 = module2 * sin(corner2);
		double a, b;
		a = (((x1 * x2) + (y1 * y2)));
		b = (((y1 * x2) + (x1 * y2)));
		std::cout << "Multiplication: " << a << " + " << b << "i" << std::endl;
	}
	void div() {
		double x1 = module * cos(corner);
		double y1 = module * sin(corner);
		double x2 = module2 * cos(corner2);
		double y2 = module2 * sin(corner2);
		double a, b;
		a = (((x1 * x2) - (y1 * y2)) / (pow(x2, 2) + pow(y2, 2)));
		b = (((y1 * x2) + (x1 * y2)) / (pow(x2, 2) + pow(y2, 2)));
		std::cout << "Divitration: " << a << " + " << b << "i" << std::endl;
	}
	void degree(double n) {
		double a, b, c, d;
		a = pow(module, n) * cos(n * corner);
		b = pow(module, n) * sin(n * corner);
		c = pow(module2, n) * cos(n * corner2);
		d = pow(module2, n) * sin(n * corner2);
		std::cout << "the first number after exponentiation: " << a << " + " << b << "i" << std::endl;
		std::cout << "the second number after exponentiation: " << c << " + " << d << "i" << std::endl;
	}
	void root() {
		double a, b, c, d;
		a = pow(module, 0.5) * cos(0.5 * corner);
		b = pow(module, 0.5) * sin(0.5 * corner);
		c = pow(module2, 0.5) * cos(0.5 * corner2);
		d = pow(module2, 0.5) * sin(0.5 * corner2);
		std::cout << "the first number after getting sqr root: " << a << " + " << b << "i" << std::endl;
		std::cout << "the second number after getting sqr root: " << c << " + " << d << "i" << std::endl;
	}
};

inline ostream& operator<<(ostream& os, const ComplexNum& num) 
{
	os << "First Num: " << num.module << "(sin(" << num.corner << ") + cos( " << num.corner << "))" << endl;
	os << "Second Num: " << num.module2 << "(sin(" << num.corner2 << ") + cos( " << num.corner2 << "))" << endl;
	return os;
}

