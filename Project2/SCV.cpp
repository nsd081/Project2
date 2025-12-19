#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <limits.h>
#include <float.h>
#include <locale.h>
//лабораторная скв 8//
void main(void)
{
	setlocale(LC_ALL, "Rus");
	double x, f1, f2, f3;
	printf("введи х\n");
	scanf_s("%lf", &x);
	f1 = 1.3 * sqrt(4 + pow(x, 2));
	f2 = pow(3, (x + 3));
	f3 = pow(x, x + 1) * sin(x + 2);
	printf("f1=%lf", f1);
	printf("\nf2=%lf", f2);
	printf("\nf3=%lf", f3);
	_getch();
}
