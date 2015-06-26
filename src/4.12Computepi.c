#include<stdio.h>
int main(){
	double pi = 4.0;
	int n;
	int x = -1;
	int i = 2;

	printf("请输入正整数n，计算pi的值：\n");
start:	scanf("%d", &n);

	if (n <= 0){
		printf("必须是正整数！！！请重新输入：");
		goto start;
	}
	while (i <= n){
		pi = pi + 4.0 / (2 * i - 1) * x;
		i = i + 1;
		x = -x;
	}
	printf("\tpi=%f", pi);
}