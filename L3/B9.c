#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void bitWise(int a, int b) {
	/* Rezolvare cu bit wise */
	if (a != b) {
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	printf("a = %d, b = %d\n", a, b);
}

void main()
{
	int a;
	int b;

		printf("Introduceti numerele: ");
		printf("\na = ");
		scanf("%d", &a);
		printf("b = ");
		scanf("%d", &b);
		printf("Interschimbarea s-a realizat: \n"); 
		bitWise(a, b);
		
	system("pause");
}