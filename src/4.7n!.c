#include<stdio.h>
int main(){
	int n;
	int i = 1;
	int result = 1;

	printf("������һ��������n�����㣺n!\n");
start:  
	scanf("%d", &n);

	if (n <= 0){
		printf("�Ͽ��Сѧȥ��֪��֪��ʲô��������������������һ����������");
		goto start;
	}
	if (n > 0)
		while (i <= n){
			result = result*i;
			i++;
		}
	printf("\t%d!=%d", n, result);
}

