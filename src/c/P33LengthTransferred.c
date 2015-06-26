#include<stdio.h>
int main(){
	int length;
	int foot;
	int inch;

	printf("What is the length in cm to be transferred?\n");
	scanf("%d", &length);

	inch = length / 2.54;
	foot = inch / 12;
	inch = inch % 12;

	printf("Length is %d foot %d inch \n", foot, inch);
}