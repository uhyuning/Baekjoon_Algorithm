#include <stdio.h>

int main()
{
	int a, b, i;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (int j = a; j > i; j--)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}