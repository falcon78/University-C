//３次元行列の和。
#include <stdio.h>
int main(){
    double seibun1[4][4];
    double seibun2[4][4];
    int i,j;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d , %d ?\n",i,j);
            scanf("%1f",seibun1[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%1f , %1f\n",seibun1[i][j]);
        }
    }
    return 0;
}