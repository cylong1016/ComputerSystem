#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
	char x[MAX][MAX];
	char y[MAX] = "0";
	int i = 0;
	int j = 0;
	int n;

	for (i = 0;; i++){
		printf("Please input %s string or input \"0\" to quit: ", i ? "another" : "a");
		scanf("%s", x[i]);
		if (!strcmp(x[i], y))
			break;
	}
	for (i = 0; strcmp(x[i], y); i++){
		for (j = i + 1; strcmp(x[j], y); j++){
			if (!strcmp(x[i], x[j])){
				for (n = j; strcmp(x[n], y); n++){
					strcpy(x[n], x[n + 1]);
				}
				j = i;
			}
		}
	}
	for (i = 0; strcmp(x[i], y); i++){
		printf("\n Get string %d: %s", i + 1, x[i]);
	}
}