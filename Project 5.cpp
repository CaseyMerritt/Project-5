// 
//  Name:		Merritt, Casey 
//  Project:	5 
//  Due:        11/22 
//  Course:		CS-2560-01-f21 
// 
//  Description: 
//				Main uses series to estimate the value of pi using the Rational class, main then demonstrates all functions of the Rational class 
// 
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Rational.h"

using namespace std;

int main()
{
	cout << "Rational by C. Merritt" << endl;

	cout << endl;

	cout << "Enter n and f? ";

	bool con = true;
	int n, f;

	while (con) {
		cin >> n >> f;

		if (n > 10 || n < 2) {
			cout << endl;
			cout << "n cannot be larger than 10 or smaller than 2 please enter values again" << endl;
		}
		else {
			con = false;
		}

	}

	Rational main;

	for (int i = 1; i < n; i++) {
		int num = pow(-1, (i + 1));
		num = num * 4;

		int denom = ((2 * i) - 1);

		Rational temp(num, denom);

		if (i == 1) {
			main = temp;
		}
		else {
			main = main + temp;
		}
	}
	
	cout << endl;
	cout << "pi = " << main.to_string() << endl;
	main.print(f);
	main = main * 2;
	cout << "2 * pi = " << main.to_string() << endl;\
	
	cout << endl;
	cout << "-------------------------------- " << endl;
	cout << endl;
	cout << "Testing features";
	int num, denom;
	num = 1;
	denom = 4;

	main.set(num, denom);

	cout << endl;
	cout << "Rational number is " << main.to_string() << endl;
	cout << "Adding 1 / 2" << endl;

	Rational temp(1, 2);
	main = main + temp;

	cout << "New Rational number is " << main.to_string() << endl;
	cout << "Subtracting 2 / 3" << endl;

	temp.set(2, 3);
	main = main - temp;

	cout << "New Rational number is " << main.to_string() << endl;
	cout << "Multiplting by 2" << endl;

	main = main * 2;

	cout << "New Rational number is " << main.to_string() << endl;
	cout << "Comparing Rational number to 6/15" << endl;

	temp.set(6, 15);
	if (main == temp) {
		cout << "Rational number is equal to 6/15" << endl;
	}
	else {
		cout << "Rational number is not equal to 6/15" << endl;
	}

	cout << "Testing Getter Functions" << endl;
	cout << "Numerator: " << main.getNumerator() << endl;
	cout << "Denominator: " << main.getDenominator() << endl;
	cout << "Converting Rational to decimal: " << main.to_double() << endl;
}

