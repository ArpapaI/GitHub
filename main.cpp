#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int pow(int a, int b);

int summa(int a, int b);

int main(void)
{
	system("chcp 1251");
	system("cls");
	int a;
	int* p;
	p = &a;
	scanf("%d", p);
	printf("%d\n", a);
	return 0;

// Я даун
}

int pow(int a, int b)
{
	int rez = 1;
	for (int i = 0; i < b; i++)
	{
		rez *= a;
	}
	return rez;
}
}

int summa(int a, int b) {
	return a + b;
}
//я артем!!!