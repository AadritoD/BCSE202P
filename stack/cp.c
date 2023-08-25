#include<stdio.h>
void main()
{
	int price,quant;
	float cost,disc;
	printf("Enter Price of the item: ");
	scanf("%d",&price);
	printf("Enter quantity of item purchased: ");
	scanf("%d",&quant);
	cost = quant * price;
	if (price > 1000)
	{
		disc = 0.1 * cost;
		cost = cost - disc;
		printf("The discount amount is: ");
		printf("%0.2f\n",disc);
	}
	printf("The total price is: ");
	printf("Rs.%0.2f",cost);
}
