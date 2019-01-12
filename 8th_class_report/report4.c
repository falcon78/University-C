#include <stdio.h>
int main (){
    int i=0;
    char str[100]= "Test",str2[100];
    while(1){
        if (str[i]=='\0')
            break;
        str2[i] = str[i];
        i++;
    }
    printf("%s\n",str2);
    return 0;
}