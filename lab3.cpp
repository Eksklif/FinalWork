// Лабораторная работа 3
// Выполнили студенты группы 22ВВ-3
// Майоров Н.А. Куракин Н.Н.
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>

int main() {
	int alA; //Переменная А, требуемая для вычислений.
	int b;
	int c;
	int d;
	const char* itog = "";
	printf("Enter a,b,c,d: ");
	scanf("%i%i%i%i", &a, &b, &c, &d);
	int max = -2147483648;
	int nm1 = 0;
	int nm2 = 0;
	if (a + b > max) {
		max = a + b;
		itog = "a & b";
		nm1 = a ; nm2 = b;
	};
	if (a + c > max) {
		max = alA + c;
		itog = "a & c";
		nm1 = a; nm2 = c;
	};
	if (a + d > max) {
		max = alA + d;
		itog = "a & d";
		nm1 = a; nm2 = d;
	};
	if (b + c > max) {
		max = b + c;
		itog = "b & c";
		nm1 = b; nm2 = c;
	};
	(b + d > max) ?  (max = b + d, itog = "b & d", nm1 = b, nm2 = d):(0);
	(c + d > max) ?  (max = c + d, itog = "c & d", nm1 = c, nm2 = d):(0);
	//if (b + d > max) {
	//	max = b + d;
	//	itog = "b & d";
	//	nm1 = b; nm2 = d;
	//};
	//if (c + d > max) {
	//	max = c + d;
	//	itog = "c & d";
	//	nm1 = c; nm2 = d;
	//};
	;printf("Max par: %s. Sum: %i + %i = %i \n", itog, nm1, nm2, max);
}
