
  #include<stdio.h>
  

    int sum(){
    int a,b;
    scanf("%d %d", &a, &b);
    int s = a+b;
    return s;
    }



    int main(){
    int si = sum();
    printf("%d", si);
    return 0;  
    }