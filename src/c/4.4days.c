#include<stdio.h>
int main(){

	int year;
	int month;

	printf("请先输入年份，再输入月份：\n");
	scanf("%d%d", &year, &month);

	if (year % 100 == 0){
		if (year % 400 == 0){

			if (month == 2)
				printf("The month has 29 days!");
			else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				printf("The month has 31 days!");
			else
				printf("The month has 30 days!");
		}
		else if (month == 2)
			printf("The month has 28 days!");
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("The month has 31 days!");
		else
			printf("The month has 30 days!");
	}
	else if (year % 4 == 0){
		if (month == 2)
			printf("The month has 29 days!");
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			printf("The month has 31 days!");
		else
			printf("The month has 30 days!");
	}
	else if (month == 2)
		printf("The month has 28 days!");
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		printf("The month has 31 days!");
	else
		printf("The month has 30 days!");

}