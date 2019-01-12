/*
レポート課題４:　以下のような関数頭部をもち、
引数x,y,zの平均値を返す関 数を書け。 
double avrg(double x, double y, double z ) 
その関数を呼び出すmain関数と、実行結果も書け。


*/

#include <stdio.h>
double avrg(double x, double y, double z);
int main (){
    double avg_main;
    avg_main = avrg(46,73,89);
    printf("平均は%.1fです。\n",avg_main);
    return 0;
}
double avrg(double x, double y, double z){
    double avg = (x+y+z)/3;
    return avg;
}