#include<stdio.h>
int main(){
	char letter;

	printf("请输入一段英文，进行大小写的转换：\n");

	do
	{
		scanf("%c", &letter);

		if (97 <= letter && letter <= 122){
			letter = letter - 32;
			printf("%c", letter);
		}
		else if (65 <= letter && letter <= 90)
		{
			letter += 32;
			printf("%c", letter);
		}
		else
			printf("%c", letter);
	} while (letter != '\n');
}