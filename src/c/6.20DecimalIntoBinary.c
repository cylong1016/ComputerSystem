#include<stdio.h>
int main(){
	int a;/*��Ҫת��������*/
	int i = 31;/*λ��*/
	int b;

	/*��������ֵ*/
	printf("��ʮ��������ת��Ϊ�����ƣ�\n");
	scanf("%d", &a);

	/*ת��Ϊ32λ������*/
	while (i >= 0){
		b = (a >> i) & 1;
		i = i - 1;
		printf("%d", b);
	}
}
