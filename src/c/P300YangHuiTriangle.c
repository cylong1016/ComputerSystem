#include<stdio.h>
#define NUM 9

int main(){
	int i, n;
	int a[NUM];
	int b[NUM];

	a[0] = 1;
	b[0] = 1;
	for (n = 1; n <= NUM; n++){
		for (i = 0; i < NUM - n; i++){
			printf("  ");
		}

		for (i = 0; i < n; i++){
			printf("%2d  ", a[i]);
		}
		printf("\n");

		if (n < NUM){
			for (i = 1; i <= n; i++){
				if (i == n)
					b[i] = 1;
				else
					b[i] = a[i - 1] + a[i];
			}
			for (i = 0; i <= n; i++){
				a[i] = b[i];
			}
		}
	}
}