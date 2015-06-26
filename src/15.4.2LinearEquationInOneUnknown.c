#include<stdio.h>

double Equation(double a, double b, double c);

int main(){
	double a;
	double b;
	double c;
	double x;

	printf("Compute \"ax+b=c\"¡ú_¡ú\nPlease input a:");
	scanf("%lf", &a);
	printf("Please input b:");
	scanf("%lf", &b);
	printf("Please input c:");
	scanf("%lf", &c);

	if (a == 0){
		printf("\n\tError!");
	}
	else{
		x = Equation(a, b, c);
		printf("\t\t%.10gx+%.10g=%.10g\n\t\tx=%.10g", a, b, c, x);
	}
}

double Equation(double a, double b, double c){
	return (c - b) / a;
}