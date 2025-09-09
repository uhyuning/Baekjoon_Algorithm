#include <stdio.h>

int main(){
    int a[101];
    int N, M, cnt=0;
    
    scanf("%d",&N);
    
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&M);
    
    for(int i=0;i<N;i++){
        if(M==a[i]){
            cnt++;
        }
    }
    
    printf("%d", cnt);
}