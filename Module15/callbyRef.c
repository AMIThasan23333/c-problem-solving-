
  #include<stdio.h>


   
   void fun(int* p){
    printf("p  er value - %d\n", *p);
    printf("p  er address - %p\n", p);
   }




  
  int main(){

    int x=100;
    printf("x er address -%p\n", &x);
    fun(&x);
    return 0;

   
  }