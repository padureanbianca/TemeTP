#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//Sa se scrie un program care calculeaza suma elementelor unui vector folosindu-ne doar de variabile de tip pointer.
int main()
{
	int* v;
	v = (int*)(malloc(2 * sizeof(int)));
	*v = 0;
	*(v + 1) = 0;
	printf("Introduceti elementele vectorului:\n");
	while (scanf("%d", v)==1) {
		*(v + 1) += *v;
		//printf("\nSuma elementelor este: %d\n", *(v + 1));
	}
	printf("Suma elementelor este: %d\n", *(v + 1));

	system("pause");
	return 0;
}

