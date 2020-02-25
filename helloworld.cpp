#include<stdio.h>

int main() {
    char name[10];
    int age;
    printf("Please enter your name :");
    scanf("%s", name);
    printf("Please enter your age :");
    scanf("%d", &age);
    printf("Hello %s, welcome to c++ \n", name);
    printf("Next year you will be %d", age+1);
}
