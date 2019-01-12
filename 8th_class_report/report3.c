
#include <stdio.h>
int main (){
   char string[100]="Test";
   char string2[100];
   int i;
   for (i=0;string[i]!='\0';i++){
       string2[i] = string[i];
   }

   printf("%s\n",string2);
   return 0;
}
