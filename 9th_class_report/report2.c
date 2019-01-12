#include <stdio.h>
int multi(int x,int y);
int main (){
    int mult;
    mult = multi(10,2);
    printf("掛け算の結果は%dです。\n",mult);
    return 0;
}
int multi(int x,int y){
    int mul;
    mul = x * y;
    return mul;
}