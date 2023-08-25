#include <stdio.h>
void main()
{
	int per;
	printf("Enter the percentage");
	scanf("%d",&per);
	
	if(per>=90){
		printf("S GRADE");
	}
	else if (per>=80 && per<=89){
		printf("A GRADE");
	}
	
	else if (per>=70 && per<=79){
		printf("B GRADE");
	}
		
	else if (per>=60 && per<=69){
		printf("C GRADE");
	}
	else if (per<=50){
		printf("D GRADE");
	}
	else {
	printf("N GRADE");
	}
	
}
