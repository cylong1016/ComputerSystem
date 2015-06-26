#include<stdio.h>
#define MAX_STRING 10

int StringLength(char string[]);

int main(){
	char input[MAX_STRING];
	int length = 0;

	printf("Input a word(Less than %d characters):\n", MAX_STRING);
	scanf("%s", input);

	length = StringLength(input);
	printf("The word contains %d characters\n", length);
}

int StringLength(char string[]){

	int index = 0;

	while (string[index] != '\0')
		index = index + 1;
	return index;
}