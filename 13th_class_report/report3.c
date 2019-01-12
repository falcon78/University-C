#include <stdio.h>
int* max_element(int* ptr, int n);
int main (){
    int x[7] = {1,2,34,4,5,6,8};
    int* ptr;
    ptr = max_element(x,7);
    printf("%d \n",*ptr);
    return 0;
}

int* max_element(int* ptr, int n){
    int* max;
    int i;
    max = &ptr[0];
    for (i=1; i<n;i++){
        if (ptr[i]>*max)
            max = &ptr[i];
    }
    return max;
}