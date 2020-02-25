#include<stdio.h>
int ReadValidFourDigitNumber();// function prototype
int GetThousandPlaceDigit(int);
int XFormThousandPlaceDigit(int);

int main(){
    int number;
    int p1000, p100, p10, p1;
    int xp1000, xp100, xp10, xp1;
    number=ReadValidFourDigitNumber();
    // function call
    // Get thousand place digit and convert to expanded form 
    p1000=GetThousandPlaceDigit(number);
    xp1000=XFormThousandPlaceDigit(p1000);number=number%1000;
    // Get hundred place digit and convert to expanded form
    p100=GetThousandPlaceDigit(number);
    xp100=XFormThousandPlaceDigit(p100);number=number%100;
    // Statements to get ten place digit and convert to expanded form
    // Statements to get one place digit and convert to expanded form
    printf("%d+%d+%d+%d", xp1000, xp100, xp10, xp1);
    // getch();
}

int ReadValidFourDigitNumber ()// Function Definitionstart here 
{
    int num; 
    scanf("%d", &num);
    
    while((num>=9999) || (num<=999)) {
        printf("\nInvalid number, please input integer of 4 digit number!");// read a new number
        scanf("%d", &num);
    }
    
    return num;
}

int GetThousandPlaceDigit(int data){ 
    // addyour statements here
    int p, x1000;

    p = data/1000;
    x1000 = p*1000;
    return x1000;        
}

int XFormThousandPlaceDigit(int data){
    // addyour statements here
}