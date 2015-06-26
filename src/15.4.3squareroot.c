#include<stdio.h>

double SquareRoot(double x);

int main(){
	double x;
	double y;

	printf("Please input x, compute f(x)=x^1/2.  \"f(n+1)=(f(n)+x/f(n))/2\"\n");
	scanf("%lf", &x);
	if (x < 0){
		printf("\n\tError!");
	}
	else{
		y = SquareRoot(x);
		printf("\tf(%g)=%g", x, y);
	}
}

double SquareRoot(double x){
	int n;
	double y = 1.0;
	for (n = 1; n <= 10; n++){
		y = (y + x / y) / 2;
	}
	return y;
}