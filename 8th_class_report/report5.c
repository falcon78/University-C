#include <stdio.h>
int main (){
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int b[3][3]={{9,8,7},
                 {6,5,4},
                 {3,2,1}};
    int c[3][3] ={{0,0,0},{0,0,0},{0,0,0}};
    int d[3][3] ={{0,0,0},{0,0,0},{0,0,0}};
    int i,j,k;
    //行列の和
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            c[i][j]=a[i][j] + b[i][j];
        }
    }
    //行列の積
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
               d[i][j] += a[i][k]*b[k][j];  
            }
        }
    }

    printf("行列の和\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("行列の積\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%5d",d[i][j]);
        }
        printf("\n");
    }
    printf("\n");

return 0;
}