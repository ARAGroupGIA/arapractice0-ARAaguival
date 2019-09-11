/* Here, you should entry the required libraries */
#include<stdio.h>
void main(){
	/* Here, you should write the source code of your program */
	int number1;
	printf("Give me a number: ");
	scanf("%d", &number1);
	int number2;
	printf("Give another number: ");
	scanf("%d", &number2);
	int number3;
	printf("Give me another number: ");
	scanf("%d", &number3);
	int sum=number1+number2+number3;
	printf("The sum is %d", sum);
}
