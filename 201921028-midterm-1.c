#include <stdio.h>

double average(double in1, double in2){
	double aver;

	printf("%f", (in1 + in2) / 2);
}
int main(void){

	double a, b;

	printf("input first real number");
	scanf("%lf", &a);

	printf("input second real number");
	scanf("%lf", &b);

	average(a, b);
}
