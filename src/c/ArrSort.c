#include<stdio.h>
#include <math.h>
#define LENGTH 10

// 取绝对值
int abs(int x) {
	if (x < 0) {
		return -x;
	}
	return x;
}

// 得到两个数中较大的数
int getMax(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}

// 得到两个数中较小的数
int getMin(int x, int y) {
	if (x < y) {
		return x;
	}
	return y;
}

// 判断是否为素数
int isPrime(int n) {

	int i = 0;
	int r = sqrt(n);

	for (i = 2; i <= r; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return n;
}

// 寻找数组里最后一个素数
// 返回这个素数在数组里的位置
int searchLastPrime(int arr[]) {

	int index = 0;
	int i = 0;

	for (i = 0; i < LENGTH; i++) {
		if (isPrime(arr[i])) {
			index = i;
		}
	}
	return index;
}

// 判断是否为偶数
int isEven(int x) {
	if (x % 2 == 0) {
		return x;
	}
	return 0;
}

// 寻找数组里最大偶数
// 返回该偶数在数组里的位置
int searchMaxEven(int arr[]) {

	int i = 0;
	int maxEven = 0;
	int index = 0;

	for (i = 0; i < LENGTH; i++) {
		if (isEven(arr[i]) && arr[i] > maxEven) {
			maxEven = arr[i];
			index = i;
		}
	}
	return index;
}

// 对数组内arr[min]到arr[max]之间的数进行升序排序
// 采用插入排序法
void sort(int arr[], int min, int max) {

	int i = 0;
	int insertValue = 0;
	int index = 0;

	for (i = min + 1; i <= max; i++) {
		insertValue = arr[i];
		index = i - 1;
		for (; index >= min && insertValue < arr[index]; index--) {
			arr[index + 1] = arr[index];
		}
		arr[index + 1] = insertValue;
	}
}

// 对数组x中的最大偶数和最后一个素数之间的元素作升序排序（包含最大偶数和最后一个素数）
// 函数的返回值是需要排序的元素个数。
int mpsort(int arr[]) {

	int maxEvenIndex = searchMaxEven(arr);
	int lastPrimeIndex = searchLastPrime(arr);
	int min = getMin(maxEvenIndex, lastPrimeIndex);
	int max = getMax(maxEvenIndex, lastPrimeIndex);

	sort(arr, min, max);
	return abs(max - min + 1);
}

int main() {

	int x[LENGTH] = { 0 };
	int k = 0;
	int length = 0;

	// 获取输入
	for (k = 0; k < LENGTH; k++) {
		scanf("%d", &x[k]);
	}
	length = mpsort(x);
	// 输出
	for (k = 0; k < LENGTH; k++)
		printf("%4d", x[k]);
	printf("\n");
	printf("t=%d", length);
	return 0;
}