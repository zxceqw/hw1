#ifndef COMPLEX_H;
#define COMPLEX_H
using namespace std;
struct Complex 
{
	double re; double im;
	Complex Ccreate(double re, double im);
	void sum(Complex n1);
	void min(Complex n1);
	void mult(Complex n1);
	void div(Complex n1);
	double mod();
	bool compare(Complex n1);
};


#endif;