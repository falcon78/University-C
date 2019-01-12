/*
演習問題1 : 演習問題1 次のような頭部をもつ、
配列から配 列へt個の要素をコピーする関数を作れ。
配列の 長さは十分に用意されているとする。
void ary_copy(char*d, char* s, int t)

*/

#include <stdio.h>
void str_contact(char*d, char*s1, char*s2);
int main (){
    char attached[100], 
    one[10] = {"Gene "},
    two[10]={"Mutation"};
    str_contact (attached, one, two);
    printf("%s \n",attached);
    return 0;
}

void str_contact(char*d, char*s1, char*s2){
    int i = 0, j=0;
    //あえて strcpy,strcatを使わない
    while (s1[i] != '\0'){
        d[i] = s1[i];
        i++;   
    }
    while(s2[j] != '\0'){
        d[i] = s2[j];
        j++; i++;
    }
}

