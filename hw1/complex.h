#ifndef COMPLEX_H;
#define COMPLEX_H
using namespace std;
struct Complex {
	double re; double im;
	void sum(Complex n1);
	void min(Complex n1);
	void mult(Complex n1);
	void div(Complex n1);
	void amount(Complex n1);
	void abs(Complex n1);
};


#endif;