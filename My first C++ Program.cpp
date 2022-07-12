#include <iostream>
using namespace std;
void main()
{
	cout << "Please enter both of your marks : " << "\n"; //Here starts Q1
	int num1, num2;
	cin >> num1 >> num2;

	int Summation;
	Summation = num1 + num2;
	cout << "Summation = " << Summation << "\n";

	int Multiplication;
	Multiplication = num1 * num2;
	cout << "Multiplication = " << Multiplication << "\n";

	int Subtraction;
	Subtraction = num1 - num2;
	cout << "Subtraction = " << Subtraction << "\n";

	double Division;
	Division = 1.0f*num1 / num2;
	cout << "Divition = " << Division << "\n";

	int Remainder;
	Remainder = num1 % num2;
	cout << "Remainder = " << Remainder << "\n";

	cout << "----------------------------------------------------------" << "\n";//Here starts Q2

	cout << "Please enter the length of the square : ";
	double length;
	cin >> length;
	double Circumference;
	Circumference = length * 4;
	cout << "Circumference of the square= " << Circumference << "\n";

	double area;
	area = length * length;
	cout << "The area of the square = " << area << "\n";

	cout << "----------------------------------------------------------" << "\n";//Here starts Q3

	cout << "Please enter the raduis of the Circle : ";
	double radius;
	cin >> radius;
	double area1;
	area1 = 22.0 / 7 * radius * radius;
	cout << "The area of the Circle = " << area1 << "\n";

	cout << "----------------------------------------------------------" << "\n";//Here starts Q4

	cout << "Please enter the temperature in Fahrenheit to convert it to Celius : ";
	double Fahrenhiet;
	cin >> Fahrenhiet;
	double Celius;
	Celius = (5.0 / 9.0) * (Fahrenhiet - 32.0);
	cout << "The temperature in Celius =" << Celius << "\n";

	cout << "----------------------------------------------------------" << "\n";//Here starts Q5

	cout << "Please enter the three numbers you want to get the summation of : ";
	int x, y, z;
	cin >> x >> y >> z;
	int SUM;
	SUM = x + y + z;
	cout << "The summation of the three numbers = " << SUM << "\n" << "\n" << "\n";

	cout << "                               THIS *WAS* MY FIST C++ PROJECT :P";
}