#include<stdio.h>

int main(){
	char result;
	int x;
	int y;

	printf("���������������ж�ǰһ���Ƿ���Ա���һ��������\n");
	scanf("%d%d", &x, &y);

	if (x%y == 0)
		printf("        True      %d/%d=%d", x, y, x / y);
	else
		printf("        False     %d/%d=%f", x, y, (double)(x) / (double)(y));
}