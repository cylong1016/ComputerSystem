#include<stdio.h>

int main(){
	char nextchar;
	int goti = 0;
	int gotin = 0;
	int count = 0;

	printf("Enter the string:\n");
	do{
		scanf("%c", &nextchar);

		switch (nextchar){
		case'i':
			goti = 1;
			gotin = 0;
			break;
		case'n':
			if (gotin)
				gotin = 0;
			if (goti)
				gotin = 1;
			goti = 0;
			break;
		case't':
			if (gotin)
				count++;
			goti = 0;
			gotin = 0;
			break;
		default:
			goti = 0;
			gotin = 0;
		}
	} while (nextchar != '\n');

	printf("\tCount=%d", count);
}
