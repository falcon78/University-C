//２０１８年１０月の日を入力して、日曜を出力をするプログラム。
#include <stdio.h>
int main (){
    int a,i;
    while(1){
        printf("\n\n");
        printf("日付を入力\n");
        scanf("%d",&a);
        if (a%7 == 0)
            printf("日曜だよ\n");
        if (a%7 == 1)
            printf("月曜だよ\n");
        if (a%7 == 2)
            printf("火曜だよ\n");
        if (a%7 == 3)
            printf("水曜だよ\n");
        if (a%7 == 4)
            printf("木曜だよ\n");
        if (a%7 == 5)
            printf("金曜だよ\n");
        if (a%7 == 6)
            printf("土曜だよ\n");

    }

    return 0;
    
}