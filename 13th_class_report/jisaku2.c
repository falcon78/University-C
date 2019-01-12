/*メインプログラムから小文字の文字列ポインターを受け取り、小文字を大文字に変換
して文字列ポイントに格納する関数を作れ*/
#include <stdio.h>
#include <ctype.h>
void capitalize(char* capitalized);
int main(){
    char str1[5]={"hello"};
    capitalize(str1);
    printf("%s \n",str1);
    return 0;
}

void capitalize(char* capitalized){
    while(*capitalized){
        *capitalized =  toupper((unsigned char) *capitalized);
        capitalized++;
    }