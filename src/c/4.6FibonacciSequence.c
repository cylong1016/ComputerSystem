#include<stdio.h>

int main(){
	int x = 1;
	int y = 1;
	int n;
	int a;
	int i = 1;
	printf("������n������:f(n) = f(n-1) + f(n-2)����ʼ����Ϊ:f(1) = 1;f(2) = 1\n");
start:
	scanf("%d", &n);

	if (n <= 0){
		printf("�������������һ���������������");
		goto start;

	}
	else if (n <= 2){
		a = 1;
		printf("\tf(%d) = %d", n, a);
	}
	else{
		while (i <= n - 2){
			a = x + y;
			y = x;
			x = a;
			i++;
		}
		printf("\tf(%d) = %d", n, a);
	}
}