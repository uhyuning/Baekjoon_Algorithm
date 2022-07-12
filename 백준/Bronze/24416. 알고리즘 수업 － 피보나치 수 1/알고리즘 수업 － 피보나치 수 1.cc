#include <stdio.h>
#pragma warning(disable:4996)

int dp[50];
int cnt2 = 0;

int fib(int n) {
    if (n == 1 or n == 2)
        return 1;
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {

    dp[1], dp[2] = 1, 1;
    cnt2 = 0;
    for (int i = 3; i < n + 1; i++) {
        cnt2 += 1;
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return cnt2;
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d %d", fib(a), fibonacci(a));

}