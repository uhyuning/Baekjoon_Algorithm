#include <stdio.h>

int main(){
    int a,b,w,h;
    int min;
    scanf("%d %d %d %d",&a,&b,&w,&h);
    
    min=a;
    if(min>=b){
        min=b;
    }
    if(min>=w-a){
        min=w-a;
    }
    if(min>=h-b){
        min=h-b;
    }
    printf("%d",min);
}