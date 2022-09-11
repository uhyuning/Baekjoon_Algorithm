#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

char aa[100];

int main() {
	int a;
	int start = 666;
	int check = 0;
	scanf("%d", &a);

	while (a != check) {
		sprintf(aa, "%d", start);
		for (int i = 0; i < strlen(aa); i++) {
			if (aa[i] == '6') {
				if (aa[i + 1] == '6' && aa[i + 2] == '6') {
					check++;
					break;
				}
			}
		}
		start = atoi(aa);

		if (a == check) {
			printf("%d", start);
		}
		start++;
	}
}