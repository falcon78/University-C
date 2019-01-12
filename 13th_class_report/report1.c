#include <stdio.h>
void ary_copy(char* d, char* s,int t);

int main(){
    char a[5]={"Hello"}, b[5];
    int t = 5;
    //謎：tを４にすると”Hello”が二回printされる？
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