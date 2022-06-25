///A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of 

#include<stdio.h>
int main()
{
	int amount,ten,fifty,hundred;
	
	printf("Enter the amount to be withdraw:");
	scanf("%d",&amount);
	
	ten=amount/10;
	fifty=amount/50;
	hundred=amount/100;
	
	printf("The cashiar will give ten notes=%d\nFifty notes=%d\nHundred notes=%d\n",ten,fifty,hundred);
	
	
	
	return 0;
}
