#include<stdio.h>
int main(){
    int a, b, c, d, e;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    if(a<0){
        printf("%d",d+c*(-a)+e*b);
    }
    else if(a==0){
        printf("%d", d+b*e);
    }
    else{
        printf("%d", (b-a)*e);
    }
    
    return 0;
}