#include <stdio.h>
char* char_element3(char* str, char c);
int main (void){
    char main_char[100] = {"ABCdrrge"};
    char a = 'f';
    char* b;
    b = char_element3(main_char,a);
    printf("\n Address : %p \n",b); 
    printf(" %c\n\n",*b);
    return 0;
}

char* char_element3(char* str ,char c){

    while (*str != '\0'){
        if (*str == c){
            return str;
        }
        str++;
        
    }
    return str;
}