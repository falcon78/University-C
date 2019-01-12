//二つの数字の差 (x-y)
#include <stdio.h>
int subtract(int x,int y);
int main() {
    int result,xIn,yIn;
    printf("xを入力");
    scanf("%d",&xIn);
    
    printf("yを入力");
    scanf("%d",&yIn);

    result = subtract(xIn,yIn);
    printf("%d\n",result);
    return 0;
}

int subtract (int x,int y){
    int resultSub = x-y;
    return resultSub;
}