#include <stdio.h>
int main(){
	int n;
	int i = 1;
	int j = 1;

	printf("������һ������n���õ�һ������\n");
start:	
	scanf("%d", &n);
	if (n <= 0){
		printf("���������ģ�����������������n��");
		goto start;
	}
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++)
			printf("%d\t", i);
		printf("\n");
	}

}