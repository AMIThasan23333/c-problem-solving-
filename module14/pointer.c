
  #include<stdio.h>
  
  int main(){

   int x =10;

   printf("%p\n", &x);

   int *p =&x;

   printf("%p\n", p);

//    dereference

   
   p =500; /* it will change the value  */

   printf("%d\n", x);

   *p = 500;

    printf("%d\n", &x);




    


     return 0;

   
  }