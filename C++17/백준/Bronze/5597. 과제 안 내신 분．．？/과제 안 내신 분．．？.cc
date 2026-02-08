#include <stdio.h>

int main(){
    int aa[32]={0}, a;
    
    for(int i=1;i<31;i++){
        scanf("%d",&a);
        aa[a]=1;
    }
    for(int i=1;i<31;i++){
        if(aa[i]==0)
            printf("%d\n",i);
    }
}