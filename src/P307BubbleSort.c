#include<stdio.h>
#define MAX 10

void BubbleSort(int list[]);

int main(){
	int i;
	int numbers[MAX];

	printf("Enter %d numbers:\n", MAX);
	for (i = 0; i < MAX; i++){
		printf("Input number %d: ", i + 1);
		scanf("%d", &numbers[i]);
	}

	BubbleSort(numbers);

	printf("\nThe input set,ascending order:\n");
	for (i = 0; i<MAX; i++){
		printf("%d  ", numbers[i]);
	}
}

void BubbleSort(int list[]){
	int i;
	int j;
	int temp;

	for (j = 1; j <= MAX - 1; j++)
		for (i = 0; i <= MAX - j - 1; i++)
			if (list[i]>list[i + 1]){
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}
}