#include<stdio.h>
int main(){
	int i = 0;
	int c = 1;
	int a;
	int b;
	int x;
	printf("������һ�������������������ʾ�����ɸ�1��5��10�ĺ��ж����ַ�����\n");
	scanf("%d", &x);

	a = x / 5;
	i = i + a + 1;
	b = x / 10;
	while (c <= b){
		a = (x - c * 10) / 5;
		i = i + a + 1;
		c = c + 1;
	}

	printf("����%d�ַ�����", i);
}