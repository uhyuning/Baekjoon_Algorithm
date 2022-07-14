#include <stdio.h>
#pragma warning(disable:4996)


int main() {
	int a;
	int i = 2;
	scanf("%d", &a);

	while (a != 1) {
		if (a % i == 0) {
			printf("%d\n", i);
			a /= i;
		}
		else
			i++;
	}
}