
  #include<stdio.h>
  
  int main(){

    int n, div_2 =0, div_3 =0;
    scanf("%d", &n);

    for(int i =0; i<n; i++){

        int a;
        scanf("%d", &a);

        if(a%2 == 0){
            div_2 +=a;

        }
        else if(a%3 == 0){
            div_3 +=a;

        }
    }

    printf("%d %d\n", div_2, div_3);
    


     return 0;

   
  }