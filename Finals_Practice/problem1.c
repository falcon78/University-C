/*
問題 1 仮引数strにより文字列の先頭要素へのポインタ(先 頭要素のアドレス)を受け取り、仮引数cによりアルファベット1文 字を受け取り、
文字列内のその文字へのポインタを返却する関数 char_element3を完成させよ。また、その文字が文字列内に複 数個所存在する場合は、
最後の文字へのポインタを返却すると する。また、その文字が文字列内に存在しない場合は文字列の 終端であるヌル文字へのポインタを返却するとする。
以下の関数 頭部を持つとする。
char* char_element3(char* str, char c)
例えば...
char_element3("ABCdefeg", 'e')は、
文字列“ABCdefg”内 の2個目eのアドレスを返却する。 
char_element3("ABCdefeg", 'E')は、文字列“ABCdefg” のヌル終端文字のアドレスを返却する。
*/
#include <stdio.h>
char* char_element3(char* str, char c);
int main (void){
    char main_char[100] = {"ABCdfrg"};
    char a = 'd';
    char* b;
    b = char_element3(main_char,a);
    printf("\n Address : %p \n",b);
    printf(" %c\n\n",*b);
    return 0;
}



char* char_element3(char* str ,char c){
    char* tmp;
    while(*str != '\0'){
        if (*str == c){
            return str; 
        }
        str++;
    }
    return str;
}






/*
char* char_element3(char* str ,char c){
    int matched = 0;
    char* b;
    while (*str != '\0'){
        if (*str == c){
            b = str;
            matched = 1;
        }
        str++;
    }
    if (matched == 0)
        return str;
    else
        return b;
}
*/