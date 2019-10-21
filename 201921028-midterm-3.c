#include <stdio.h>

void swap(int *pa, int *pb){

	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main(void){
	int a = 2;
	int b = 3;

	int *pa = &a;
	int *pb = &b;

	printf("%d %d\n", a, b);
	swap(pa, pb);
	printf("%d %d\n", a, b);
}

