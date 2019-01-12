#include <stdio.h>
#include "report3_function.h"
int main() {
    int number,result;
    printf("数字を入力");
    scanf("%d",&number);

    result = isPrime(number);

    if (result == 1){
        printf("\n %d  ",result);
        printf("素数です。\n");
    }
    else{
        printf("\n %d  ",result);
        printf("合成数です。\n");
    }
    return 0;
}