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
		cout << (n1.re * this->re + n1.im * this->im) / (this->re * this->re + this->im * this->im) << "" << (this->re * n1.im - n1.re * this->im) / (this->re * this->re + this->im * this->im) << "i" << endl;
	}
}

double Complex::mod()
{
	return sqrt(this->re * this->re + this->im * this->im);
}

bool Complex::compare(Complex n1)
{
	if (this->mod() > n1.mod()) return true;
	else return false;
}



