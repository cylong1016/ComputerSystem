#include<stdio.h>
int main(){
	double e = 1;
	int result;
	int i, j;
	int numOfTerms;

	printf("������n������e�Ľ���ֵ��nԽ�󣬽��Խ�ӽ�e:\n");
	scanf("%d", &numOfTerms);

	for (i = 1; i <= numOfTerms; i++){
		result = 1;
		for (j = 1; j <= i; j++)
			result = result * j;
		e = e + 1.0 / result;
	}
	printf("The approximate value of e is %lf\n", e);
}