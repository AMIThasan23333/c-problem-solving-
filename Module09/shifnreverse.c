
  #include<stdio.h>
  
  int main(){

    int n,i;
    scanf("%d", &n);
    int arr[n+1];

    for(int i=0;i<n; i++){
   
      scanf("%d", &arr[i] );
      
    }
    int pos,val;

    scanf( "%d %d",   &pos,&val);

       for(i=n;i>=pos + 1; i--){
   
          arr[i]=arr[i-1];

    }

      arr[pos] =val;

      for(i=0;i<=n; i++){
   
          printf("%d",  arr[i]);

          
    }

     return 0;

   
  }