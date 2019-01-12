#include <stdio.h>
void evenoddpart(int* ptr, int* e);
int main (void){
    int a = 56, b = 0;
    evenoddpart(&a,&b);
    printf("%d , %d \n",a,b);
    printf("%d",a);
    printf("%d");
    return 0;
}
void evenoddpart(int* ptr, int* e){
    int i=0 ,division = 0,remainder1 = 0;
    division = *ptr;
    while(1){
        remainder1 = division % 2;
        if (remainder1 != 0)
            break;
        division = division/2;
        i++;
    }
    *e = division;
    *ptr = i;
}



for(*e = 0; *ptr%2==0; *e++ ){
    *ptr = *ptr / 2;
}

