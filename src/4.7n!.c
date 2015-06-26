#include<stdio.h>
int main(){
	int n;
	int i = 1;
	int result = 1;

	printf("请输入一个正整数n，计算：n!\n");
start:  
	scanf("%d", &n);

	if (n <= 0){
		printf("赶快回小学去，知不知道什么叫正整数？？？请输入一个正整数：");
		goto start;
	}
	if (n > 0)
		while (i <= n){
			result = result*i;
			i++;
		}
	printf("\t%d!=%d", n, result);
}

