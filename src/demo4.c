// 阿x问我的一道题
// 求一个函数结果的近似值
// 作者：陈云龙
// 创建时间：2014 / 4 / 1  1:25 PM
#include<stdio.h>

// 阶乘函数声明
int Factorial(int n);
// 幂函数的声明
double Power(double x, int n);
// 题中的函数声明
double y(double x);

int main() {
	printf("x = %.1f  y = %f\n", 0.5, y(0.5));
	printf("x = %.1f  y = %f\n", 2.0, y(2.0));
	printf("x = %.1f  y = %f\n", 1.0, y(1.0));
	printf("x = %.1f  y = %f\n", 3.0, y(3.0));
}

// 阶乘函数
int Factorial(int n) {
	int result = 1;
	int i = 0;
	for (i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}
/* int Factorial(int n) {
	if(n == 0) {
	return 1;
	} else {
	return(n * Factorial(n - 1));
	}
	}*/

// 幂函数
double Power(double x, int n) {
	int i = 0;
	double y = 1.0;
	for (i = 0; i < n; i++) {
		y *= x;
	}
	return y;
}

// 题中要求的函数
double y(double x) {
	// 函数有多少项
	int size = 10;
	int i = 0;
	double y = 0;

	for (i = 1; i <= size; i++) {
		y += Power(x, 2 * i - 1) / ((2 * i - 1) * Factorial(i - 1));
	}
	return y;
}