#include <math.h>
#include<stdio.h>
#include <stdlib.h>
#include "../headers/operations.h"

float add(float a, float b)
{
	return a + b;
}

float substract(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	if(b == 0)
	{
		printf("Error! Cannot divide a number by 0");
		exit(1);
	}
	return a / b;
}