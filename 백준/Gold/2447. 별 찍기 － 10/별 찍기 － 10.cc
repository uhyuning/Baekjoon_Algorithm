#include <stdio.h>
#pragma warning(disable:4966)


void star(int x,int y, int s) {
	if ((x/s) % 3 == 1 && (y/s) % 3 == 1) {
		printf(" ");
	}
	else {
		if (s / 3 == 0) {
			printf("*");
		}
		else {
			star(x, y, s / 3);
		}
	}
}


int main() {
	int a;
	int x, y;

	scanf("%d", &a);
	
	for (x = 0; x < a; x++) {
		for (y = 0; y < a; y++) {
			star(x, y, a);
		}
		printf("\n");
	}

	return 0;
}