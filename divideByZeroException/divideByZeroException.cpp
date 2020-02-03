#include <iostream>
#include <string>
using namespace std;

double divCalc(double a, double b);

int main()
{
	double a, b, c;
	cout << "Welcome to the division calculator." << endl;
	do {
		cout << "Enter dividend: ";
		cin >> a;

		cout << "Enter divisor: ";
		cin >> b;

		try
		{
			c = divCalc(a, b);
			cout << "The quotient is: "
				<< c << endl;
		}
		catch (...)
		{
			cout << "Error. Cannot divide by zero!" << endl;
		}
	} while (true);
}

double divCalc(double dividend, double divisor) {
	double quotient;
	if (divisor == 0) {
		throw "Divide by zero error.";
	}
	quotient = dividend / divisor;
	return quotient;
}
