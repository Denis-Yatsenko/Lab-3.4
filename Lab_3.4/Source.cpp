// Lab_03_4.cpp
// ������ ����� ��������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;


	// ������������ � ����� ����
	if ((y >= 0 && (y * y) <= pow(R, 2) - pow(x, 2)) || (y <= 0 && y >= -R && y <= x))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cin.get();
	return 0;
}