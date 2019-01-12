/*
演習問題2 関数の外で宣言されたint型整数a,b,cがある とき、
aとbの小さい方の値をcに格納する関数を作成せよ。 
関数にはa,b,cのアドレスを与えるとする。
*/

#include <stdio.h>
void minimum(int *x, int *y, int *z);
int main (){
    int a,b,c;
    printf("aを入力: ");
    scanf("%d",&a);
    printf("bを入力: ");
    scanf("%d",&b);
    minimum(&a,&b,&c);
    printf("min : %d\n",c);
    return 0;
}
void minimum(int *x, int *y, int *z){
    if (*x>*y)
        *z = *y;
    else
        *z = *x;
}