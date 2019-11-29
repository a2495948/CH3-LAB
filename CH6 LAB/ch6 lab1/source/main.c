#include <stdio.h>
#include <stdlib.h>
#include "information.h"

void main()
{
	Person P;

	printf("Please input your name: ");
	scanf_s("%s", &P.name, 8);
	printf("Please input your gender (0 for woman, 1 for man): ");
	scanf_s("%d", &P.gender);
	printf("Please input your age: ");
	scanf_s("%d", &P.age);

	printf("\nHi! %s  ", P.name);
	if (P.gender == 0)
		printf("You are a %d-year-old woman.\n", P.age);
	else
		printf("You are a %d-year-old man.\n", P.age);

	system("pause");
	return 0;
}

