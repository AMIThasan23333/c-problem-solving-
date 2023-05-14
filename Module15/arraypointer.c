
  #include<stdio.h>
  
  int main(){

    
    int ar [5] = {10,20,30,40,50};

    printf("0 th index er address - %p\n", &ar[0]);

    printf("0 th index er address - %p\n", ar);

    printf("0 th index er VALUE - %p\n", ar[0]);

    printf("0 th index er VALUE - %p\n", *ar);

    printf("1 th index er VALUE - %d\n", ar[1]);

    printf("1 th index er VALUE - %d\n", *(ar +1));




    







     return 0;

   
  }