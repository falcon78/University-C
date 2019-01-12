/*
レポート課題３：レポート課題３ 以下のような関数頭部をもち、引数xの１０進での１桁目を 
返す関数を書け。 int lowest( int x ) その関数を呼び出すmain関数と、実行結果も書け。 
*/
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