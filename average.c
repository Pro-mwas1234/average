#include<stdio.h>
int a,b,c;
float average;

int main(){
	printf("enter first number \n");
	scanf("%d", &a);
	printf("enter second number \n");
	scanf("%d", &b);
	printf("enter third number \n");
	scanf("%d", &c);
	average =(a+b+c)/3;
	printf("The average is: %f",average);	
	
	return 0;
}