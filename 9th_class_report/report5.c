#include <stdio.h>
int get2(void);
int main(){
    int b;
    b = get2();
    printf("2倍の数字は%dです。\n",b);
    return 0;
}

int get2 (void){
    int a;
    printf("整数を入力");
    scanf("%d",&a);
    a = a*2;
    return a;
}