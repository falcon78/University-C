/*
演習問題1 : 演習問題1 次のような頭部をもつ、
配列から配 列へt個の要素をコピーする関数を作れ。
配列の 長さは十分に用意されているとする。
void ary_copy(char*d, char* s, int t)

*/
#include <stdio.h>
void ary_copy(char* d, char* s,int t);

int main(){
    char a[5]={"Hello"}, b[5];
    int t = 5;
    //謎：tを４にすると”Hello”が二回printされる？
    //ヌル文字が代入されてないからかな？
    ary_copy(a,b,t);
    printf("%s\n",b);
    return 0;
}

void ary_copy(char* d, char* s,int t){
    int i;
    for (i=0;i<=t;i++){
        s[i] = d[i];
    }
}