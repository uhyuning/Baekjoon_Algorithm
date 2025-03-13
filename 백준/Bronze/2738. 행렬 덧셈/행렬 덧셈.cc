#include <stdio.h>

int array[101][101], array2[101][101], array3[101][101];

int main() {
    int N,M;

    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&array[j][i]);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&array2[j][i]);
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            array3[j][i]=array[j][i]+array2[j][i];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ",array3[j][i]);
        }
        printf("\n");
    }

    
    return 0;
}