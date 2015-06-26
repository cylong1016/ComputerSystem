#include<stdio.h>
#define MAX 100

int main(){
	char x[MAX];
	int i = 0;
	int j = 0;
	int n;

	printf("Please input a string (<%d):\n", MAX);
	scanf("%s", x);

	for (i = 0; x[i] != '\0'; i++){
		for (j = i + 1; x[j] != '\0'; j++){
			if (x[i] == x[j]){
				for (n = j; x[n] != '\0'; n++){
					x[n] = x[n + 1];
				}
				j = i;
			}
		}
	}
	printf("%s", x);
}