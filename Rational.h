// 
//  Name:		Merritt, Casey 
//  Project:	5
//  Due:        11/22
//  Course:		CS-2560-01-f21 
// 
//  Description: 
//				Rational class member function declarations
// 

#include <string>

#pragma once
class Rational
{
private:
	int numerator;
	int denominator;

public:
	Rational();
	Rational(int x);
	Rational(int p, int q);
	~Rational();

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
	Rational operator +(int);
	Rational operator *(int);
	Rational operator -(Rational);
	bool operator ==(Rational);


};

