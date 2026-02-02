#include <stdio.h>

int main() {
    int MAX=-999, aa[10][10], px, py;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&aa[j][i]);
            if(aa[j][i]>MAX){
                MAX = aa[j][i];
                px = j+1;
                py = i+1;
            }
        }
    }
    printf("%d\n", MAX);
    printf("%d %d",py,px);
    return 0;
}