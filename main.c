#include <stdio.h>

int main(int argc, char* argv[]) {
	for(int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			if (i % 5 == 0) {
				printf("Hiho\t");
			} else {
				printf("Hi\t");
			}
		} else if (i % 5 == 0) {
			printf("Ho\t");
		} else {
			printf("%i\t", i);
		}
		if( i % 10 == 0 ){
			printf("\n");
		}
	}
}
