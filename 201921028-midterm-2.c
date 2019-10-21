#include <stdio.h>

int main(void){

	int i= 1;
	int *pi = &i;
	for (int j = 0; j<100; j++){
		for (int k = 1; k < 11;){
			printf("%d", *pi);
			*pi += 1;
		}
		printf("\n");
	}
}
