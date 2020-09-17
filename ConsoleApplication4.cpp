#include <iostream>
#include <cmath>

using namespace std;

void perimeter_and_area(double x, double y)
{
	double z = sqrt(x * x + y * y);
	double s = (x * y) / 2;
	double p = x + y + z;
	cout << "Perimeter = " << p << "\n";
	cout << "Area = " << s << "\n";
}

void add_substract_multiplicate_divide(double x, double y)
{
	cout << "x+y=" << x + y << "\n";
	cout << "x-y=" << x - y << "\n";
	cout << "x/y=" << x / y << "\n";
	cout << "x*y=" << x * y << "\n";
}

void circumference_and_area(double r)
{
	const double PI = 3.141592653589793238463;
	cout << "Длина окружности = " << 2 * PI * r << "\n";
	cout << "Площадь круга = " << PI * (r * r) << "\n";
}

void powers_of_pi()
{
	const double PI = 3.141592653589793238463;
	for (int i = 2; i < 6; i++)
	{
		cout << "PI in " << i << " power = " << pow(PI, i) << "\n";
	}
}

int main()
{
	double x, y, r;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	perimeter_and_area(x, y);
	add_substract_multiplicate_divide(x, y);
	cout << "Введите радиус: ";
	cin >> r;
	circumference_and_area(r);
	powers_of_pi();
	return 0;
}