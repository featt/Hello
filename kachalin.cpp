#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double task1(double a, double b, double c, double d)
{
	return (a / c)*(b / d) - (a*b - c) / (c * d);
}

double task2(double x, double y)
{
	return ((sin(x) + cos(y)) / (cos(x) - sin(y)))*tan(x*y);
}

double task3(double x)
{
	return x - (pow(x, 3) / 3) + (pow(x, 5) / 5); 
}

double task4(double x)
{
	return sin(sqrt(x + 1)) - sin(sqrt(x - 1));
}


int main()
{
	system("chcp 1251>nul");

	double a;
	double b;
	double c;
	double d;
	cout << "������� �, ��, �� � ��: ";
	cin >> a, b, c, d;
	cout << "��������� ������ ������ �������: " << task1(a, b, c, d) << endl;
	cout << "������� x, y: ";
	cin >> a, b;
	cout << "��������� ������ ������ �������: " << task2(a, b) << endl;
	cout << "������� x: ";
	cin >> a;
	cout << "��������� ������ ������ �������: " << task3(a) << endl;
	cout << "������� x: ";
	cin >> a;
	cout << "��������� ������ 4 �������: " << task4(a) << endl;
	system("pause>nul");
	return 0;
}