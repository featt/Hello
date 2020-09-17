#include <cmath>
#include <iostream>

using namespace std;

double n1(double a, double b, double c)
{
	return ((b + sqrt(pow(b, 2) + 4 * a * c)) / 2 * a) - pow(a, 3) * c + pow(b, -2);
}

double n2(double a, double b, double c, double d)
{
	return ((a * b) / (c * d)) - ((a * b - c) / (c * d));
}

double n3(double x, double y)
{
	return ((sin(x) + cos(y)) / (cos(x) - sin(y))) * tan(x * y);
}

double n4(double x, double y)
{
	return ((x + y) / (y + 1)) - ((x * y - 12) / (34 + x));
}

int main()
{
	double a, b, c, d, x, y;
	cout << "input a, b and c: ";
	cin >> a >> b >> c;
	cout << "Reuslt of case1 func = " << n1(a, b, c) << "\n";
	cout << "input a, b, c and d: ";
	cin >> a >> b >> c >> d;
	cout << "Result of case2 func = " << n2(a, b, c, d) << "\n";
	cout << "input x and y: ";
	cin >> a >> b;
	cout << "Result of case3 func = " << n3(a, b) << "\n";
	cout << "input x and y: ";
	cin >> a >> b;
	cout << "Result of case4 func = " << n4(a, b) << "\n";
	return 0;
}

