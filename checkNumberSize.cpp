#include<stdio.h>

int main()
{
	int number;
//	printf("Please enter number:");
	scanf("%d", &number);
	while(number < 999) {
		printf("\nInvalid Number!. \n Please input 999<number<10000:");
		scanf("%d", &number);
	}
	printf("Number: %d", number);
}
