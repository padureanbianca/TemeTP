#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stiva[10];
int sidx = -1;

void push(int num) {
	sidx += 1;
	stiva[sidx] = num;
}

int pop() {
	int num;
	num = stiva[sidx];
	sidx -= 1;
	return num;
}

int main() {
	int c, n;
	int i;
	int num;

	printf("Introduceti val lui C: ");
	scanf("%d", &c);
	printf("Introduceti val lui N: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Introduceti un numar: ");
		scanf("%d", &num);

		if (num & (1 << c)) {
			push(num);
		}
	}

	printf("Numere care satisfac conditia sunt: ");
	while (sidx > -1) {
		printf("%d ", pop());
	}

	system("pause");
	return 0;
}

