#include <stdio.h>

int main() {

    int x, t, a, b;

    scanf("%d\n %d", &x,&t);
   

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        x -= a * b;
    }

    if (x == 0) printf("Yes");
    else printf("No");

    return 0;
}