#include<stdio.h>

char Letter(int a);		/* 2��a��10 */

int main(){
	int x;
	int y;
	int a;
	int b;

	printf("Please input integer x and y (0��x,y��9):\n");
	scanf("%d%d", &x, &y);
	if ((x == 0) || (x == 1) || (y == 0) || (y == 1))		/* ������x��yΪ0��1����������� */
		printf("\tError!");					/* "\t"Ϊ�Ʊ�� */
	else{
		a = Letter(x);	/* aΪ����x�ķ���ֵ */
		b = Letter(y);	/* bΪ����y�ķ���ֵ */
		for (a = Letter(x); a < Letter(x + 1); a++){		/* Ƕ��ѭ�� */
			for (b = Letter(y); b < Letter(y + 1); b++)
				printf("%c%c ", a, b);
		}
	}
}

/* ת������ */
char Letter(int a){
	switch (a){
	case 2:
		return 'a';
	case 3:
		return 'd';
	case 4:
		return 'g';
	case 5:
		return 'j';
	case 6:
		return 'm';
	case 7:
		return 'p';
	case 8:
		return 't';
	case 9:
		return 'w';
	case 10:
		return '{';
	}
}