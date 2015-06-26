#include<stdio.h>

void DecimalIntoBinary(int x);
char s[33];
int  i = 31;

int main(){
	int x;

	printf("Please input a number and obtain a binary number: ");
	scanf("%d", &x);

	DecimalIntoBinary(x);

	for (; i >= 0; i--){
		s[i] = 0;
	}
	s[32] = '\0';
	for (; i < 31; i++){
		s[i + 1] = s[i + 1] + '0';
	}
	printf("The binary number is : %s ", s);
}

void DecimalIntoBinary(int x){
	int remainder;
	if (x>0){
		remainder = x % 2;
		x = x / 2;
		s[i] = remainder;
		i = i - 1;
		DecimalIntoBinary(x);
	}
}