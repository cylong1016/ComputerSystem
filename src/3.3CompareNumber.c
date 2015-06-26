#include<stdio.h>
int main(){
	int number1;
	int number2;
	int a;
	printf("Please input two integer\n");
	scanf("%d%d", &number1, &number2);
	a = number1 <= number2 ? number2 : number1;
	printf("The result is %d\n", a);
}