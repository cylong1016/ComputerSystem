#include<stdio.h>
#define MAX1 100
#define MAX2 100

void StrCat(char*firstStr, char*secondStar);

int main(){
	char FirstStr[MAX1];
	char SecondStr[MAX2];

	printf("Enter the FirstStr (<%d): ", MAX1);
	scanf("%s", FirstStr);
	printf("Enter the SecondStr (<%d): ", MAX2);
	scanf("%s", SecondStr);

	StrCat(FirstStr, SecondStr);		//Á¬½Ó×Ö·û´®

	printf("FirstStr&SecondStr: %s", FirstStr);
}

// º¯Êý
void StrCat(char*firstStr, char*secondStr){
	int i = 0;
	int j = 0;
	while (firstStr[i] != '\0')
		i++;
	while ((firstStr[i++] = secondStr[j++]) != '\0');
}