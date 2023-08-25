#include <stdio.h>
void main ()
{
char op;
float num1,num2;

printf("enter an operator");
scanf("%c",&op);

printf("enter two operands");
scanf("%f%f",&num1, &num2);

switch (op){


	case'+':
	printf("%0.1f + %0.1f = %0.1f",num1+num2,num1,num2);
	break;
	case'-':
	printf("%0.1f - %0.1f = %0.1f",num1+num2,num1,num2);
	break;
	case'*':
	printf("%0.1f * %0.1f = %0.1f",num1*num2,num1,num2);
	break;
	case'/':
	printf("%0.1f / %0.1f = %0.1f",num1/num2,num1,num2);
	break;
	default:
	printf("error");}
	
}
