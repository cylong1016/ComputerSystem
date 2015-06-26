#include<stdio.h>
char ToUpper(char inchar);

int main(){
	char echo = 'A';
	char upcase;
	int a;
	int b = 000;
	int c = 111;
	int d = 222;
	printf("please input a string,and than a to upper A\n");
	while (echo != '\n'){
		scanf("%c", &echo);
		upcase = ToUpper(echo);
		printf("%c", upcase);
	}
	a = printf("%d%d%d", b, c, d);
	printf("\n%d\n", a);
}

char ToUpper(char inchar){
	char outchar;

	if ('a' <= inchar&&inchar <= 'z')
		outchar = inchar - ('a' - 'A');
	else
		outchar = inchar;

	return outchar;
}