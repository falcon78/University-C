#include <stdio.h>
int lowest (int x);
int main (){
    int lo;
    lo = lowest(1002);
    printf("一桁の数字は%dです。\n",lo);
    return 0;
}
int lowest (int x){
    int low;
    low = x%10;
    return low;
}