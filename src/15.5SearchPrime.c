#include<stdio.h>
#define FALSE 0
#define TRUE 1

int Prime(int a){
	int divisor;
	int prime;
	prime = TRUE;
	for (divisor = 2; divisor < a; divisor++){
		if ((a%divisor) == 0){
			prime = FALSE;
		}
	}
	if (prime)
		return 1;
	else
		return 0;
}


int main(){
	int x;
	int y;
	int a;
	int b;

	printf("Please input x and y. Search prime numbers between x and y:\n");
	scanf("%d%d", &x, &y);
	for (a = x; a <= y; a++){
		b = Prime(a);
		if (b){
			printf("The number %d is prime\n", a);
		}
		else{
			continue;
		}
	}
}
