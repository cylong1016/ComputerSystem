#include<stdio.h>
#define MAX 100

int main(){
	char x[MAX];
	int n;
	int i;

	printf("Please input a string (<%d):\n", MAX);
	scanf("%s", x);
	printf("Please input n:");
	scanf("%d", &n);

	for (i = 0; x[i] != '\0'; i++){
		if (x[i] > (126 - n)){
			x[i] = x[i] - (94 - n);
		}
		else{
			x[i] = x[i] + n;
		}
	}
	printf(" An encrypted string:%s", x);
}