#include<stdio.h>

int main(){
	int x;
	int y;

	printf("请输入两个整数来比较它们的大小：\n");
	scanf("%d%d", &x, &y);

	if (x < y)
		printf("      %d<%d", x, y);
	else
		printf("      %d<%d", y, x);
}