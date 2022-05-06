#include <iostream>
#include "Complex.h"
#include <fstream>
#include <string>


int main() {
	Complex a{ 3 , 2 };
	Complex b{ 1 , 1 };
	cout << "1.1" << endl;
	a.sum(b);
	a.min(b);
	a.mult(b);
	b.div(a);
	cout << "____________________________" << endl << "1.2" << endl;
	string path = ("complex.txt");
	string str;
	fstream f;
	f.open(path);
	int n = 0;
	while (!f.eof())
	{
		getline(f, str);
		n++;
	}
	cout << n << " - amount of complex numbers" << endl;

	Complex* arr = new Complex[n];
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		Complex a;
		f >> a.re;
		f >> a.im;
		arr[i] = a;
		if (arr[i].mod() > max) max = arr[i].mod();
	}
	cout << max;
}