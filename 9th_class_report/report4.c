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