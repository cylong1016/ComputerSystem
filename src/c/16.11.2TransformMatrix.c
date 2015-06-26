#include<stdio.h>
#define M 4
#define N 5

void Transform(int x[M][N], int y[N][M]);		// ת������
void PrintMatrix(int*ptr, int x, int y);		//���������

int main(){
	int m1[M][N];
	int m2[N][M];
	int i = 0;
	int j = 0;

	printf("Please input %d numbers, and form %d��%d matrix:\n", M*N, M, N);
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			scanf_s("%d", &m1[i][j]);
		}
	}
	Transform(m1, m2);

	printf("\nMatrix 1:\n\n");
	PrintMatrix(m1[0], M, N);
	printf("\nMatrix 2:\n\n");
	PrintMatrix(m2[0], N, M);
}

// ת������
void Transform(int x[M][N], int y[N][M]){
	int i;
	int j;
	for (i = 0; i < M; i++){
		for (j = 0; j < N; j++){
			y[j][i] = x[i][j];
		}
	}
}

//���������
void PrintMatrix(int*ptr, int x, int y){
	int i;
	int j;
	for (i = 0; i < x; i++){
		for (j = 0; j < y; j++){
			printf("\t%d", *ptr);
			ptr = ptr + 1;
		}
		printf("\n\n");
	}
}