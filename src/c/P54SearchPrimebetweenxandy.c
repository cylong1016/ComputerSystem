#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(){
	int x;
	int y;
	int a;
	int divisor;
	int prime;

	printf("������������������Ѱ������֮���������\n");
start:	
	scanf("%d%d", &x, &y);

	if (x <= 0 || y <= 0){
		printf("���ȣ����������룺");
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