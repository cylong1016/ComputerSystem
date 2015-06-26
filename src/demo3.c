// 阿x问我的一道题
// 输出一个函数的最大值和最小值
// 作者：陈云龙
// 创建时间：2014 / 4 / 1  12:39 PM

#include<stdio.h>

// 函数声明
double f(double x);

int main() {

	double x = 0;
	double y = 0;
	double max = 0;
	double min = 0;

	/* 输出所有y值 */
	for (x = 0; x <= 2; x += 0.2) {
		y = f(x);
		printf("Result : x = %.1f, y = %g \n", x, y);
	}

	/* 输出最大值 */
	for (x = 0; x <= 2; x += 0.2) {
		y = f(x);
		if (max < y) {
			max = y;
		}
	}
	printf("maxValue: %g\n", max);

	// 输出最小值
	min = max;
	for (x = 0; x <= 2; x += 0.2) {
		y = f(x);
		if (min > y) {
			min = y;
		}
	}
	printf("minValue: %g\n", min);

	return 0;
}

// 函数f(x)
double f(double x) {
	double y = 0;

	// 秦九韶算法
	// y = 2 * x * x * x - 3 * x * x * x * x + 6 * x * x * x * x * x - 4 * x + 50;
	y = ((2 - x * (3 - 6 * x)) * x * x - 4) * x + 50;

	return y;
}