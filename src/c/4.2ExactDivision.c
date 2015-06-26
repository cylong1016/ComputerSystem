#include<stdio.h>

int main(){
	char result;
	int x;
	int y;

	printf("输入两个整数来判断前一个是否可以被后一个整除：\n");
	scanf("%d%d", &x, &y);

	if (x%y == 0)
		printf("        True      %d/%d=%d", x, y, x / y);
	else
		printf("        False     %d/%d=%f", x, y, (double)(x) / (double)(y));
}