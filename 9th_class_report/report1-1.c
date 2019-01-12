//xのy乗を求めるプログラム
#include <stdio.h>
#include <math.h>
int power(int x , int y);
int main(){
    int a,xIn,yIn;
    printf("xを入力");
    scanf("%d",&xIn);
    
    printf("yを入力");
    scanf("%d",&yIn);
    
    a = power(xIn,yIn);
    printf("%d\n",a);
    return 0;
}
int power(int x,int y){
    int ans;
    ans =  pow(x,y);
    return ans;
}