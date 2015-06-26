#include<stdio.h>
int main(){
	int a;/*需要转换的整数*/
	int i = 31;/*位数*/
	int b;

	/*获得输入的值*/
	printf("将十进制整数转化为二进制：\n");
	scanf("%d", &a);

	/*转化为32位二进制*/
	while (i >= 0){
		b = (a >> i) & 1;
		i = i - 1;
		printf("%d", b);
	}
}
