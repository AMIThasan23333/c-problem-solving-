#include<stdio.h>

int main(){

   char a;

   scanf("%c", &a);


   if(a >= 'a' && a<='z'){
     int ans = a-31;
     printf("%c", ans);
   }

   else{

        int ans = a+33;
     printf("%c", ans);
   }




}