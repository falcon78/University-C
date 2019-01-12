#include <stdio.h>
int main (void){
    int i=0,j=0,temp;
    int a[5]={4,5,2,3,1};
    for (j=0;j<5;j++){
        for(i=0;i<5-1;i++){
            if (a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    for (j=0;j<5;j++){
        printf("%d  ",a[j]);
    }
}
