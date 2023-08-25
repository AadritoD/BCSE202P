#include<stdio.h>
void main()
{
	int year;
	printf("PROGRAM TO CHECK LEAP YEAR\n");
	printf("Enter year to check: ");
	scanf("%d",&year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
	{
		printf("The Entered Year is a Leap year");
		
	}
	else 
	{
		printf("The Entered Year is NOT a Leap Year");
	}
}




///for leap year,
		///1.year should be divisible by 4 but not divisible by 100
		///2. year should be divisible by 400
