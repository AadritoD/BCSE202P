#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter First number: ");
	scanf("%d",&a);
	printf("Enter Second number: ");
	scanf("%d",&b);
	if (a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else if (b>a)  
	{
		printf("%d is Less than %d",a,b);
	}
	else
	{
		printf("%d is equal to %d",a,b);
	}
}
