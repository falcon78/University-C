/*
自作問題１：挿入ソート？
*/
#include <stdio.h>
int main (){
    int array[5]={5,6,2,3,10};
    int h , n=5,i,j;
    for (i=1;i<n;i++){
        h = array[i];
        j = i-1;
        while (j >= 0 && array[j] > h){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = h;
        
    }
    for (i=0;i<5;i++){
        printf("[%d],",array[i]);
    }
		printf("\n");
    return 0;
}