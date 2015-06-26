#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
	int x;
	int y;
	int a;
	int divisor;
	int prime;

	printf("请输入两个正整数，寻找它们之间的素数：\n");
start:	
	scanf("%d%d", &x, &y);

	if (x <= 0 || y <= 0){
		printf("逗比，请重新输入：");
		goto start;
	}
	if (x > y){
		for (a = y; a <= x; a++){
			prime = TRUE;

			for (divisor = 2; divisor < a; divisor++){
				if ((a%divisor) == 0){
					prime = FALSE;
					break;
				}
			}
			if (prime)
				printf("The number %d is prime\n", a);
		}
	}
	else{

		for (a = x; a <= y; a++){
			prime = TRUE;

			for (divisor = 2; divisor < a; divisor++){
				if ((a%divisor) == 0){
					prime = FALSE;
					break;
				}
			}
			if (prime)
				printf("The number %d is prime\n", a);
		}
	}
}