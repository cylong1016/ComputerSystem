#include<stdio.h>
#include <math.h>
#define LENGTH 10

// ȡ����ֵ
int abs(int x) {
	if (x < 0) {
		return -x;
	}
	return x;
}

// �õ��������нϴ����
int getMax(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}

// �õ��������н�С����
int getMin(int x, int y) {
	if (x < y) {
		return x;
	}
	return y;
}

// �ж��Ƿ�Ϊ����
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

// Ѱ�����������һ������
// ��������������������λ��
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

// �ж��Ƿ�Ϊż��
int isEven(int x) {
	if (x % 2 == 0) {
		return x;
	}
	return 0;
}

// Ѱ�����������ż��
// ���ظ�ż�����������λ��
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

// ��������arr[min]��arr[max]֮�����������������
// ���ò�������
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

// ������x�е����ż�������һ������֮���Ԫ�����������򣨰������ż�������һ��������
// �����ķ���ֵ����Ҫ�����Ԫ�ظ�����
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

	// ��ȡ����
	for (k = 0; k < LENGTH; k++) {
		scanf("%d", &x[k]);
	}
	length = mpsort(x);
	// ���
	for (k = 0; k < LENGTH; k++)
		printf("%4d", x[k]);
	printf("\n");
	printf("t=%d", length);
	return 0;
}