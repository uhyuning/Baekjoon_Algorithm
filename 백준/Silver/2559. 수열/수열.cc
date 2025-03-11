#include <stdio.h>

int array[200002], array2[200002];

int main() {
    int N, K;
    int max;
    int answer;
    scanf("%d %d",&N,&K);

    for(int i=0;i<N;i++){
        scanf("%d",&array[i]);
        if(i==0){
            array2[i]=array[i];
        }
        else{
            array2[i]=array2[i-1]+array[i];
        }
    }
    max = array2[K-1];
    for(int i=K;i<N;i++){

        answer=array2[i]-array2[i-K];
        if(answer>max){
            max=answer;
        }
    }
    printf("%d",max);
    return 0;
}