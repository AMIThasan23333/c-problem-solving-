
  #include<stdio.h>


  void fun(int x) {
   
    printf("FUN ER MODHR X ER ADDRESS - %d\n", x);
  }



  int main() {

     int x =10;

     fun(x);
     /* we only pass the value inside the function  */

     printf("Main ER MODHR XER ADDRESS - %d\n", x);
     return 0;
  }