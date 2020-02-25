#include<stdio.h>

int inputValid(int number);
int getThousandPlace(int);
int getHundredPlace(int);
int getTenPlace(int);
int getPlace(int);
int XFormThousandPlace(int);
int XFormHundredPlace(int);
int XFormPlace(int);

int main(){
	int number;
	int p1000, p100, p10, p1;
 	int xp1000, xp100, xp10, xp1;
	
	number = inputValid(number); // Check Validity
	
	p1000 = getThousandPlace(number);
 	xp1000 = XFormThousandPlace(p1000);
 	number=number%1000;
// 	printf("%d %d", p1000, xp1000);

	p100 = getHundredPlace(number);
 	xp100 = XFormHundredPlace(p100);
 	number=number%100;
 	
 	p10 = getTenPlace(number);
 	xp10 = XFormThousandPlace(p10);
 	number=number%10;
 	
 	p1 = getPlace(number);
 	xp1 = XFormPlace(p1);
 	
 	printf("%d %d %d %d", p1000, p100, p10, p1);
 	printf("\n%d + %d + %d + %d", xp1000, xp100, xp10, xp1);
}

int inputValid(int n1){
	int num;
	
	scanf("%d", &num);
	
	while((num<=999)||(num>9999)){
		printf("Invalid input\n\n");
		scanf("%d", &num);
	}
}

int getThousandPlace(int n1){ // Thousand
	return n1/1000;
}

int XFormThousandPlace(int p){
	return p*1000;
}

int getHundredPlace(int n1){ // Hundred
	return n1/100;
}

int XFormHundredPlace(int p){
	return p*100;
}

int getTenPlace(int n1){ // Ten
	return n1/10;
}

int XFormTenPlace(int p){
	return p*10;
}

int getPlace(int n1){ //dsdsd
	return n1/1;
}

int XFormPlace(int p){
	return p*1;
}
