#include <stdio.h>

int main () {
	int i = 0;
	for (i=0; i<=10; i++) {
	  printf("%d ", i);
	}
	printf("\n");

	for (i=10; i>=0; i--) {
	  printf("%d ", i);
	}
	printf("\n"); 
	return 0;
}
