#include<stdio.h>
int main(){
	int a, b, c, d=0;
    scanf("%d", &a);
	for(int i=1;i<=a;i++){
        scanf("%d %d", &b, &c);
        int limit;
        if (b < c) {
            limit = b;
        } else {
            limit = c;
        }
        for(int j=1;j<=limit;j++){
            if(b%j==0&&c%j==0){
			    d=j;
            }
		}
        printf("%d\n", d*(b/d)*(c/d));
	}

    return 0;
}