//
// Created by falcon on 2018-12-22.
//
/*
 * 演習問題1 年齢、身長、体重のメンバからなる 構造体Personを考え、各メンバに値をキーボート
 * ゙ より入力させる関数pin、画面上に出力する関数 poutを作成せよ。それぞれの頭部は以下の通り
 * する。
• void pin(Person* ptr) • void pout(Person p)
 */
typedef struct Person {
    int age;
    int height;
    int weight;
}Person;

#include <stdio.h>
void pin (Person *p);
void pout (Person p);
int main (){
    printf("test 1");
    Person p;
    pin(&p);
    pout(p);
}

void pin(Person *p){
    printf("年齢を入力してください。\n");
    scanf("%d",&(*p).age);
    printf("身長を入力してくだいさ。\n");
    scanf("%d",&(*p).height);
    printf("体重を入力してください \n");
    scanf("%d",&(*p).weight);
}
void pout(Person p){
    printf("年齢%dです。\n",p.age);
    printf("身長は%dです。\n",p.height);
    printf("体重は%dです。\n",p.weight);
}
