#include <stdio.h>
int cntalpha(char* str ,char c);
int main(void){
    char array[]="Hello,World.";
    char test = 'l';
    int count = 0 ;
    count = cntalpha(array,test);
    printf("%cが現れる回数は%d回です\n",test, count);
    return 0;
}
int cntalpha(char* str ,char c){
    int count = 0;
    for(;*str != '\0';str++){
        if (*str == c)
            count++;
    }
    return count;
}