#include<stdio.h>

void CalculateTotal(int num1, int num2, int num3);
float CalculateAverage(int num1, int num2, int num3);

int main () {
    int num1, num2, num3;
    float average;

   printf("Please enter 3 number :");
   scanf("%d %d %d", &num1, &num2, &num3); 
   CalculateTotal(num1, num2, num3);
   average = CalculateAverage(num1, num2, num3);
   printf("\nAverage of 3 number : %.2f", average);
}

void CalculateTotal(int num1, int num2, int num3) {
    int total = num1+num2+num3;
    printf("Total : %d", total);
}

float CalculateAverage(int num1, int num2, int num3) {
    float avg = (num1+num2+num3)/3;    
    return avg;
}