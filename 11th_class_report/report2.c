#include<stdio.h>
/*
int main(void){
    int x=123; printf("%p\n",&x);
} */

int main(void){ 
    int x=123;
    int* ptr; 
    printf("%p\n",&x);
    ptr=&x;
    printf("%p\n",ptr);
    printf("%d\n", *ptr);
}
