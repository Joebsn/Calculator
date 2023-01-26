#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>  
#include "../headers/operations.h"
#include "../headers/input.h"

int main()
{
	while(1)
	{
		float a, b, result;
		char ch;
		input(&a, &b, &ch);
		bool display = true;

		switch (ch) 
		{
			case '+':
				result = add(a,b);
				break;
			case '-':
				result = substract(a,b);
				break;
			case '*':
				result = multiply(a,b);
				break;
			case '/':
				result = divide(a,b);
				break;
			default:
				printf("Error! please write a valid operator\n");
				display = false;
		}
		if(display)
			printf("%.4g %c %.4g = %.6g\n",a,ch, b, result);
	}
	exit(0);
}
