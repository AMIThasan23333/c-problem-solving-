
  #include<stdio.h>
  
  int main(){

    char x;

    scanf("%c", &x);

    if(x >= '0' && x<='9'){

        printf("IS DIGIT");
    }else{

        printf("Alphabet\n");

        if (x>='a' && x<='z'){
            printf("in  small case");
        }else
        {
           printf("Is Capital");
        }   
    }
     return 0;
  }