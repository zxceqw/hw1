#include "complex.h"
#include <iostream>
#include "fstream"
#include <string>
#include <vector>
using namespace std;


Complex Complex::Ccreate(double re, double im)
{
	Complex result = { re, im };
	return result;
}

void Complex::sum(Complex n1)
{
	if (this->re + n1.re == 0)
	{
		cout << this->im + n1.im << 'i' << endl;
	}
	else if (this->im + n1.im == 0)
	{
		cout << this->re + n1.re << endl;
	}
	else if (this->im + n1.im > 0)
	{
		cout << this->re + n1.re << "+" << this->im + n1.im << "i\n";
	}
	else
	{
		cout << this->re + n1.re << "" << this->im + n1.im << "i\n";
	}
}

void Complex::min(Complex n1)
{
	if (this->im - n1.im == 0)
	{
		cout << this->re - n1.re << endl;
	}
	else if (this->re - n1.re == 0)
	{
		cout << this->im - n1.im << 'i' << endl;
	}
	else if (this->im - n1.im > 0)
	{
		cout << this->re - n1.re << "+" << this->im - n1.im << "i\n";
	}
	else
	{
		cout << this->re - n1.re << "" << this->im - n1.im << "i\n";
	}
}

void Complex::mult(Complex n1)
{
	if (this->re * n1.re - this->im * n1.im == 0)
	{
		cout << this->re * n1.im + n1.re * this->im << "i" << endl;
	}
	else if (this->re * n1.im + n1.re * this->im == 0)
	{
		cout << this->re * n1.re - this->im * n1.im << endl;
	}
	else if (this->re * n1.im + n1.re * this->im > 0)
	{
		cout << this->re * n1.re - this->im * n1.im << "+" << this->re * n1.im + n1.re * this->im << "i" << endl;
	}
	else if (this->re * n1.im + n1.re * this->im < 0)
	{
		cout << this->re * n1.re - this->im * n1.im << "" << this->re * n1.im + n1.re * this->im << "i" << endl;
	}
}

void Complex::div(Complex n1)
{
	if (n1.re * this->re + n1.im * this->im == 0)
	{
		cout << (this->re * n1.im - n1.re * this->im) / (this->re * this->re + this->im * this->im) << "i" << endl;
	}
	else if (this->re * n1.im - n1.re * this->im == 0)
	{
		cout << (n1.re * this->re + n1.im * this->im) / (this->re * this->re + this->im * this->im) << endl;
	}
	else if ((this->re * n1.im - n1.re * this->im) / (this->re * this->re + this->im * this->im) > 0)
	{
		cout << (n1.re * this->re + n1.im * this->im) / (this->re * this->re + this->im * this->im) << "+" << (this->re * n1.im - n1.re * this->im) / (this->re * this->re + this->im * this->im) << "i" << endl;
	}
	else
	{
		cout << (n1.re * this->re + n1.im * this->im) / (this->re * this->re + this->im * this->im) << "" << (this->re * n1.im - n1.re * this->im) / (this->re * this->re + this->im * this->im) << "i" << endl << endl << endl;
	}
}


void Complex::amount(Complex n1)
{
	setlocale(LC_ALL, "ru");
	int n = 0;
	vector <Complex> p;
	string str;
	//Complex* p[] = new Complex[n];
	string path = "complex.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка при открытии файла" << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		while (!fin.eof())
		{
			getline(fin, str);
			n++;
		}
		cout << n << " - количество комплексных чисел в файле" << endl;
		fin.close();
	}
}
