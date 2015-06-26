#include <stdio.h>
int main(){
	int n;
	int i = 1;
	int j = 1;

	printf("请输入一个整数n，得到一个数阵：\n");
start:	
	scanf("%d", &n);
	if (n <= 0){
		printf("看不懂中文？？？请输入正整数n：");
		goto start;
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++)
			printf("%d\t", i);
		printf("\n");
	}

}