//３次元ベクトルの内積を求めるプログラム
#include <stdio.h>
int main (){
    int seibun1[3];
    int seibun2[3];
    int i,naiseki;
    naiseki = 0;
    printf("成分1を入力\n");
    for (i=0;i<3;i++){
        scanf("%d",&seibun1[i]);
    }
    printf("成分2を入力\n");
    for (i=0;i<3;i++){
        scanf("%d",&seibun2[i]);
    }
    
    for (i=0;i<3;i++){
        naiseki = naiseki + seibun1[i]*seibun2[i];
    }
    printf("%d",naiseki);
    return 0;
}
