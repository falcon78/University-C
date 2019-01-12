//２次元配列の積
#include <stdio.h>
int main (){
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("a[%d][%d] を入力",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("a[%d][%d] を入力",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    return 0;
}