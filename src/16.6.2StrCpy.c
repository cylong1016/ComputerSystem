#include<stdio.h>
#define MAX1 100
#define MAX2 100

void StrCpy(char*firstStr, char*secondStr);

int main(){
	char FirstStr[MAX1];
	char SecondStr[MAX2];

	printf("Please enter the FirstStr (%d): ", MAX1);
	scanf("%s", FirstStr);

	StrCpy(FirstStr, SecondStr);	//¸´ÖÆ

	printf("SecondStr(<%d): %s", MAX2, SecondStr);
}

//º¯Êý
void StrCpy(char*firstStr, char*secondStr){

	int i = 0;

	while ((secondStr[i] = firstStr[i]) != '\0'){
		i++;
	}
}