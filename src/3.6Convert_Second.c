#include<stdio.h>
int main(){
	int second;
	int minute;
	int hour;

	printf("��������Ҫ���������\n");
	scanf("%d", &second);
	minute = second / 60;
	second = second % 60;
	hour = minute / 60;
	minute = minute % 60;
	printf("Time is %d hour %d minute %d second \n", hour, minute, second);
}