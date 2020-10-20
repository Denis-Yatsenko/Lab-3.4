// Lab_03_4.cpp
// Яценко Денис Павлович
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;


	// розгалуження в повній формі
	if ((y >= 0 && (y * y) <= pow(R, 2) - pow(x, 2)) || (y <= 0 && y >= -R && y <= x))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cin.get();
	return 0;
}