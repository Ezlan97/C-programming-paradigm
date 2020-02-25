#include<stdio.h>
int main()
{
int number;
int p1000, p100, p10, p1;
scanf("%d", &number);
 while (number>9999) {
	printf("\nInvalid number! please input new valid number");
	scanf("%d", &number);
}

p1=number%10;
p10=(number/10)%10;
p100=((number/10)/10)%10;
p1000=(((number/10)/10)/10)%10;

printf("%d,%d,%d,%d", p1, p10, p100, p1000);
getchar();
}

