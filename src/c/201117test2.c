#include<stdio.h>

int SearchStr(char*str1, char*str2);

int main(){
	char str1[40] = { 0 };
	char str2[40] = { 0 };
	int result;

	printf("Please input string1:");
	scanf("%s", str1);

	printf("Please input string2:");
	scanf("%s", str2);

	result = SearchStr(str1, str2);
	printf("%d", result);
}
int SearchStr(char*str1, char*str2){

	int time = 0;
	int i = 0;
	int j = 0;
	int n;
	int true = 1;

	for (i = 0; str1[i] != '\0'; i++){
		n = i;
		for (j = 0; str2[j] != '\0'; j++){
			if (str1[n] != str2[j]){
				true = 0;
			}
			n++;
		}
		if (true){
			time = time + 1;
		}
		true = 1;
	}
	return time;
}