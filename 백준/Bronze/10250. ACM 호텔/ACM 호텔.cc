#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int a, b, c;
	int count = 0;
	int h_result = 0, t_result = 0;

	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (c % a == 0) {
			h_result = a;
		}
		else {
			h_result = c % a;
		}
		if (c % a == 0) {
			t_result = c / a;
		}
		else {
			t_result = c / a + 1;
		}
		if (t_result > 9) {
			printf("%d%d\n", h_result, t_result);
		}
		else {
			printf("%d0%d\n", h_result, t_result);
		}
	
	}
}