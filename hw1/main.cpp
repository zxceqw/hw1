#include <iostream>
#include "Complex.h"

int main() {
	setlocale(LC_ALL, "ru");
	Complex a{ 3 , 2 };
	Complex b{ 1 , 1 };
	cout << "1.1 Выведем на экран сумму, разность, произведение и частное комплексных чисел соответственно:" << endl;
	a.sum(b);
	a.min(b);
	a.mult(b);
	b.div(a);
	cout << endl << "1.2 Выведем на экран количество комплексных чисел и максимальное по модулю комплексное число из текстового файла: " << endl;
	a.amount(b);
}