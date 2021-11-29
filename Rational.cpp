// 
//  Name:		Merritt, Casey 
//  Project:	5
//  Due:        11/22 
//  Course:		CS-2560-01-f21 
// 
//  Description: 
//				Rational class member functions definitions 
// 

#include "Rational.h"
#include <iostream>
#include <iomanip>
#include <string>


Rational::Rational() {
	numerator = 0;
	denominator = 1;
}

Rational::Rational(int x) {
	numerator = x;
	denominator = 1;
}

Rational::Rational(int p, int q) {
	if (q == 0) {
		throw std::invalid_argument("Denominator cannot be 0");
	}
	else {
		numerator = p;
		denominator = q;
	}
}

Rational::~Rational() {
	
}

void Rational::set(int p) {
	numerator = p;
}

void Rational::set(int p, int q) {
	if (q == 0) {
		throw std::invalid_argument("Denominator cannot be 0");
	}
	else {
		numerator = p;
		denominator = q;
	}
}

int Rational::getNumerator() {
	return numerator;
}

int Rational::getDenominator() {
	return denominator;
}

std::string Rational::to_string() {
	std::string num = std::to_string(numerator);
	std::string denom = std::to_string(denominator);

	std::string val = num + " / " + denom;

	return val;
}

double Rational::to_double() {
	double num = (double)numerator;
	double denom = (double)denominator;

	return (num / denom);
}

void Rational::print() {
	int n = 15;

	std::string final;
	final += std::to_string(numerator / denominator) + ".";

	int remain = numerator % denominator * 10;
	for (int i = 0; i < n - 1; i++) {
		final += std::to_string(remain / denominator);
		remain = remain % denominator * 10;
	}

	int x = (remain / denominator);
	remain = remain % denominator * 10;
	if (remain / denominator > 5) {
		x++;
		final += std::to_string(x);
	}
	else {
		final += std::to_string(x);
	}

	std::cout << final << std::endl;
}

void Rational::print(int n) {
	std::string final;
	final += std::to_string(numerator / denominator) + ".";

	int remain = numerator % denominator * 10;
	for (int i = 0; i < n - 1; i++) {
		final += std::to_string(remain / denominator);
		remain = remain % denominator * 10;
	}

	int x = (remain / denominator);
	remain = remain % denominator * 10;
	if (remain / denominator > 5) {
		x++;
		final += std::to_string(x);
	}
	else {
		final += std::to_string(x);
	}

	std::cout << final << std::endl;
}

void Rational::print(int n, std::string y) {
	std::string final;
	final += std::to_string(numerator / denominator) + ".";

	std::cout << numerator << " " << denominator << "1" << std::endl;

	int remain = numerator % denominator * 10;
	for (int i = 0; i < n - 1; i++) {
		final += std::to_string(remain / denominator);
		remain = remain % denominator * 10;
	}

	int x = (remain / denominator);
	remain = remain % denominator * 10;
	if (remain / denominator > 5) {
		x++;
		final += std::to_string(x);
	}
	else {
		final += std::to_string(x);
	}

	std::cout << y << final << std::endl;
}

void Rational::print(int n, std::string y, bool z) {
	std::string final;
	final += std::to_string(numerator / denominator) + ".";

	int remain = numerator % denominator * 10;
	for (int i = 0; i < n - 1; i++) {
		final += std::to_string(remain / denominator);
		remain = remain % denominator * 10;
	}

	int x = (remain / denominator);
	remain = remain % denominator * 10;
	if (remain / denominator > 5) {
		x++;
		final += std::to_string(x);
	}
	else {
		final += std::to_string(x);
	}

	if (z == true) {
		std::cout << y << final << std::endl;
	}
	else {
		std::cout << y << final;
	}
}

void Rational::operator=(Rational copy) {
	numerator = copy.getNumerator();
	denominator = copy.getDenominator();
}

Rational Rational::operator+(Rational x) {
	Rational answer;

	int num = ((numerator * x.denominator) + (denominator * x.numerator));
	int denom = (denominator * x.denominator);

	answer.set(num, denom);

	return answer;
}

Rational Rational::operator+(int add) {
	Rational temp(add);
	Rational main(numerator, denominator);

	main = main + temp;

	return main;
}

Rational Rational::operator-(Rational x) {
	Rational answer;

	int num = ((numerator * x.denominator) - (denominator * x.numerator));
	int denom = (denominator * x.denominator);

	answer.set(num, denom);

	return answer;
}

Rational Rational::operator*(int mult) {
	Rational answer(numerator, denominator);

	answer.set(answer.getNumerator() * 2);

	return answer;
}

bool Rational::operator==(Rational x) {
	if ((numerator * x.denominator) == (denominator * x.numerator)) {
		return true;
	}
	else {
		return false;
	}
}