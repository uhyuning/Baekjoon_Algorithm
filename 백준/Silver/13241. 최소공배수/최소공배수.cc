#include <stdio.h>

long long GCD(long long int a,long long int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main() {
    long long int A,B;

    scanf("%lld %lld",&A,&B);

    printf("%lld",(A*B)/GCD(A,B));
    return 0;
}