#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
/*Sa se realizeze un program care interschimba 2 valori folosind
un pointer ca variabila auxiliara.*/
void interschimbare(int a, int b, int*aux) {
	aux = (int*)malloc(sizeof(int));
	if (a != b) {
		*aux = a;
		a = b;
		b = *aux;
	}
	printf("a=%d, b=%d", a, b);
}

int main() {
	int a, b;
	int *aux;
	aux = (int*)malloc(sizeof(int));
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	printf("Interschimbarea s-a realizat!\n");
	interschimbare(a, b, *aux);
	system("pause");
	return 0;
}