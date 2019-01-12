//バブルソート

#include <stdio.h>
int main (){
    int a[5];
    int temp,max,i,j;
    for (i=0;i<5;i++){
        printf("%d個目の数字を入力",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        printf("%d\n",a[i]);
        }
    for (i = 0; i < 5; i++){       
       for (j = 0; j < 5-i; j++){
           if (a[j] > a[j+1]){ 
              max  = a[j];
              a[j] = a[j+1];
              a[j+1] = max;
       }
      }
    }
    printf("============\n");
    for (i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
