

  #include<stdio.h>
  
  int main(){
    char  a[] = "Rahat\0";
    printf("%s", a);
     return 0;

  }

/* 10-2
   when we initialize a string without giving a size it automaticallly  add \0 at the end . if we give size a[6] it will print correctly . 

    if we a[]= "rahat\0" the size of it is 7 bcz automatically add \0 if we do not defne size  


*/