#include <stdio.h>
#include <stdlib.h>
#include "../headers/input.h"

void input(float *a, float *b, char *ch)
{
	printf("Enter an operator (+, -, *, /), to exit press 0\n");
	scanf(" %c", ch);
	if(*ch == '0')
		exit(0);

	printf("Enter the first number: ");
	scanf("%f", a);
	
	printf("Enter the second number: ");
	scanf("%f", b);
}