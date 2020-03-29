#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define STACK_SIZE 10

void push(int * stiva, int * idx, int num) {
	if (*idx == STACK_SIZE - 1) {
		printf("Stack is full, cannot add!");
	}
	else {
		*idx += 1;
		*(stiva + (*idx)) = num;
	}
}

void pop(int * idx) {
	if (*idx == -1) {
		printf("Stack already empty!");
	}
	else {
		*idx -= 1;
	}
}

int peek(int * stiva, int *idx) {
	return *(stiva + (*idx));
}

void clearStack(int * idx) {
	*idx = -1;
}


int main() {
	int n, i, num, aux, k = -1, po, ok;
	int idx1 = -1, idx2 = -1, idx3 = -1;

	int stiva1[STACK_SIZE];
	int stiva2[STACK_SIZE];
	int stiva3[STACK_SIZE];

	printf("Introduceti val N: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("Introduceti numarul: ");
		scanf("%d", &num);
		ok = 1;

		aux = num;
		while (aux % 10 != 0) {
			k++;
			push(stiva1, &idx1, aux % 10);
			aux /= 10;
		}

		aux = num;
		while (k != -1) {
			po = (int)pow(10, k);
			push(stiva2, &idx2, aux / po);
			aux %= po;
			k--;
		}

		while (idx1 != -1 && idx2 != -1) {
			if (peek(stiva1, &idx1) != peek(stiva2, &idx2)) {
				clearStack(&idx1);
				clearStack(&idx2);
				ok = 0;
				break;
			}
			else {
				pop(&idx1);
				pop(&idx2);
			}
		}

		if (ok) {
			push(stiva3, &idx3, num);
		}
	}

	printf("Numerele palindroame sunt: ");
	while (idx3 != -1) {
		printf("%d ", peek(stiva3, &idx3));
		pop(&idx3);
	}

	system("pause");
	return 0;
}
