#include<stdio.h>

int F(int x, int y);

int main(){
	int x;
	int y;
	int z;

	printf("Please input x and y,compute x^y\n");
	scanf("%d%d", &x, &y);
	z = F(x, y);
	printf("The result is %d.\n", z);
}

int F(int x, int y){
	int result;
	if (y == 1){
		result = x;
	}
	result = x;
	while (y > 1){
		result = result*x;
		y = y - 1;
	}
	return result;
}