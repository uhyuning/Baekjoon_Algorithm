#include <stdio.h>
#pragma warning(disable:4996)

int apa[20][20];

int main() {


	
	for (int i = 0; i < 16; i++) {
		apa[0][i] = 1;
		apa[i][0] = i + 1;
	}

	int a;
	scanf("%d", &a);

	int b, c;
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		scanf("%d", &c);

		for (int j = 1; j <= b; j++) {
			for (int k = 1; k < c; k++) {
				apa[k][j] = apa[k - 1][j] + apa[k][j - 1];
			}
		}
		printf("%d\n", apa[c - 1][b]);
	}
}