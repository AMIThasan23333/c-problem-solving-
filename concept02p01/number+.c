
  #include<stdio.h>
  
  int main(){

      int n;
      scanf("%d", &n);

      int sum = 0;

      while (n>0){

        int mod = n %10;

        sum= sum + mod;

        n = n/10;


      }
      ptintf("%d\n", sum);
    
     return 0;

   
  }