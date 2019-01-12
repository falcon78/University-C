/*
教科書Sample5.cを、 for文のなかでの「変数と配列の要 素の変化の様子」をはじめから最後まで逐一画面に表示 するように改造せよ。
それを実行せよ。ソートされていく様 子を説明せよ。特に、配列の添え字である変数sとtの指 す配列要素が変わっていく様子を表示結果
を使ってわか りやすく説明せよ。
(例)
>test[0]:2, test[1]:5, test[2]:3, test[3]:4, test[4]:1
>s:0, t:1, test[0]:5, test[1]:2, test[2]:3, test[3]:4, test[4]:1
>s:0, t:2, test[0]:5, test[1]:2, test[2]:3, test[3]:4, test[4]:1 >・・・
*/
#include <stdio.h>
#define NUM 5
int main (){
    int test[NUM];
    int tmp;
    int i,j,s,t;

    printf("%d人の点数を入力して下さい。\n",NUM);
    for (i=0;i<NUM;i++){
        scanf("%d",&test[i]);
    }
    for (j=0;j<NUM;j++){
        printf("test[%d]:%d",j,test[j]);
        if (j!=(NUM-1))
            printf(",");//最後だけ , をつけない。
    }
    printf("\n");
    for (s=0;s<NUM-1;s++){
        for (t=s+1;t<NUM;t++){
            if (test[t]>test[s]){
                tmp = test[t];
                test[t] =test[s];
                test [s] = tmp;

                printf("s:%d, t:%d,",s,t);
                for (j=0;j<NUM;j++){
                    printf("test[%d]:%d",j,test[j]);
                    if (j!=(NUM-1))
                        printf(",");//最後だけ , をつけない。
                }
                printf("\n");
            }
        }
    }
    for (j=0;j<NUM;j++){
        printf("%d番目の人の点数は%dです。\n",j+1,test[j]);
    }
    return 0;
}
