#include<stdio.h>

int main(){
	int x;
	int y;

	printf("�����������������Ƚ����ǵĴ�С��\n");
	scanf("%d%d", &x, &y);

	if (x < y)
		printf("      %d<%d", x, y);
	else
		printf("      %d<%d", y, x);
}