#include<stdio.h>
#define MAX_NUMS 10	//������

double AreaOfTriangle(double coX[], double coY[]);

int main(){
	int n;
	double xa[MAX_NUMS];	//����θ�����x����
	double ya[MAX_NUMS];	//����θ�����y����
	double x[3];			//�����θ�����x����
	double y[3];			//�����θ�����y����
	double area = 0.0;		//���
	int i, j;

	//����n������������
	printf("Enter the sides number of polygon(3��N��%d):\n", MAX_NUMS);
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		printf("Enter the coordinates of vertex A(%d):\n", i + 1);
		scanf("%lf%lf", &xa[i], &ya[i]);
	}

	x[0] = xa[0];
	y[0] = ya[0];
	for (i = 0; i < n - 2; i++){
		for (j = 1; j < 3; j++){
			x[j] = xa[i + j];
			y[j] = ya[i + j];
		}
		area = area + AreaOfTriangle(x, y);
	}
	printf("The area of the polygon is %g", area);
}

//��������������ĺ���
double AreaOfTriangle(double coX[], double coY[]){
	double s;
	s = ((coX[2] - coX[0])*(coY[1] - coY[0]) - (coX[1] - coX[0])*(coY[2] - coY[0]))*0.5;
	if (s >= 0)
		return s;
	else
		return -s;
}