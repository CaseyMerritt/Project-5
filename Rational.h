//Yo what it be do
#include <string>

#pragma once
class Rational
{
private:
	int numerator;
	int denominator;

public:
	Rational() {
		numerator = 0;
		denominator = 1;
	}

	Rational(int x) {
		numerator = x;
		denominator = 1;
	}

	Rational(int p, int q) {
		numerator = p;
		denominator = q;
	}

	~Rational() {
	
	}

	void set(int);
	void set(int, int);
	int getNumerator();
	int getDenominator();
	std::string to_string();
	double to_double();
	void print();
	void print(int);
	void print(int, std::string);
	void print(int, std::string, bool);

	void operator =(Rational);
	Rational operator +(Rational);
	Rational operator -(Rational);
	bool operator ==(Rational);


};

