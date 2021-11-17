//yo wat ut bed fodsa
#include "Rational.h"
#include <string>

void Rational::set(int p) {
	numerator = p;
}

void Rational::set(int p, int q) {
	numerator = p;
	denominator = q;
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

}

void Rational::print(int x) {

}

void Rational::print(int x, std::string y) {

}

void Rational::print(int x, std::string y, bool Z) {

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

Rational Rational::operator-(Rational x) {
	Rational answer;

	int num = ((numerator * x.denominator) - (denominator * x.numerator));
	int denom = (denominator * x.denominator);

	answer.set(num, denom);

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