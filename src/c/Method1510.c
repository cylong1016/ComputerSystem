#include<stdio.h>
int main(){
	int i = 0;
	int c = 1;
	int a;
	int b;
	int x;
	printf("请输入一个整数，计算该整数表示成若干个1、5、10的和有多少种方法：\n");
	scanf("%d", &x);

	a = x / 5;
	i = i + a + 1;
	b = x / 10;
	while (c <= b){
		a = (x - c * 10) / 5;
		i = i + a + 1;
		c = c + 1;
	}

	printf("共有%d种方法！", i);
}