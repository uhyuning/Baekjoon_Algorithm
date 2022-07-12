#include <stdio.h>
#pragma warning(disable:4996)


int main() {
	int a, b, cnt = 0, min = 0;
	int check = 0;
	scanf("%d", &a);
	scanf("%d", &b);


	for (int i = a; i <= b; i++) {
		check = 0;
		if (i == 1)
			continue;
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				check = 1;
		}
		if (check == 0) {
			if (min == 0) {
				min = i;
			}
			cnt += i;
		}
	}
	if (cnt == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n%d", cnt, min);
	}
}