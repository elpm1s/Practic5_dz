#include <locale.h>      
#include <stdio.h> 

#define _USE_MATH_DEFINES
#include <math.h>

void main() //домашняя работа 
{

	setlocale(LC_ALL, "RUS");

	float x = 12.3 * pow(10, -1), y = 15.4, z = 0.252 * pow(10, 3), g, r11, r12, r21, r22, r31, res1, res2, res3;

	r11 = pow(y, x + 1);
	r12 = pow(fabs(y - 2), 1. / 3) + 3;
	r21 = x + y / 2;
	r22 = 2 * fabs(x + y);
	r31 = pow(x + 1, -1 / sin(z));
	res1 = r11 / r12;
	res2 = r21 * r31;
	res3 = res2 / r22;
	g = res1 + res3;
	printf("\n");
	printf("Ответ:%f\n", g);
	printf("\n");
	printf("\n");
	printf("r11 - %f\n", r11);
	printf("r12 - %f\n", r12);
	printf("r21 - %f\n", r21);
	printf("r22 - %f\n", r22);
	printf("r31 - %f\n", r31);
	printf("res1 - %f\n", res1);
	printf("res2 - %f\n", res2);
	printf("res3 - %f\n", res3);

}