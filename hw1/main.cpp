#include <iostream>
#include "Complex.h"

int main() {
	setlocale(LC_ALL, "ru");
	Complex a{ 3 , 2 };
	Complex b{ 1 , 1 };
	cout << "1.1 ������� �� ����� �����, ��������, ������������ � ������� ����������� ����� ��������������:" << endl;
	a.sum(b);
	a.min(b);
	a.mult(b);
	b.div(a);
	cout << endl << "1.2 ������� �� ����� ���������� ����������� ����� � ������������ �� ������ ����������� ����� �� ���������� �����: " << endl;
	a.amount(b);
}