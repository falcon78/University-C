/*
自作問題２ : 文字列を入力させ、文字列の長さを調べるプログラム。
*/
#include <stdio.h>
int main(){
    char a[100];
    int i = 0, j =0;
    printf("文字列を入力\n");
    scanf("%s",a);
    for (i=0;a[i]!='\0';i++){
        j++;
    }
    printf("%d\n",i);
    return 0;
}