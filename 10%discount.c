//program to give a discount of 10% on purchases above 5000
#include<stdio.h>
int main(void) 
{
	double quantity,price,amount,discount;
	printf("Enter Quantity and Price:");
	scanf("%lf %lf",&quantity, &price);

	amount=quantity*price;
if(amount>5000)

	{

	discount=amount*0.05;
	amount=amount-discount;

	}
	
	printf("%lf",amount);
	
	return 0;

}
