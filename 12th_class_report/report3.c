#include <stdio.h>
void sum(int *x, int *y, int *z);
int main (){
    int a,b,c;
    printf("aを入力: ");
    scanf("%d",&a);
    printf("bを入力: ");
    scanf("%d",&b);
    sum(&a,&b,&c);
    printf("sum : %d\n",c);
    return 0;
}
void sum(int *x, int *y, int *z){
    *z = *x + *y;
}