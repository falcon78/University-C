/*
自作問題１ : 関数外部で宣言された要素数nのdouble型配列を3つ考える。
それら3つ の配列らの先頭要素のアドレスを受け取り、
1番目と2番目の配列のi 番目の要素に格納されている値の積を
3番目の配列のi番目の要素 に格納する関数verctor_multiplyを作れ。

*/
#include <stdio.h>
void vector_multiply(double* ptr1, double* ptr2, double* ptr3, int n);
int main (){
    int i;
    int n = 5;
    double vector1[5]= {1,2,3,4,5}, 
           vector2[5] = {1.5, 2.5,3.5,4.5,5.5},vector_result[n];
    vector_multiply(vector1,vector2,vector_result,n);
    printf("\n[");
    for (i=0;i<n;i++){
        printf(" %.1f",vector_result[i]);
        if (i!=(n-1))
            printf(", ");
    }
    printf("] \n\n");
    return 0;
}

void vector_multiply(double* ptr1, double* ptr2, double* ptr3, int n){
    int i=0;
    for (i=0;i<n;i++)
        ptr3[i] = ptr1[i] * ptr2[i];
    
}