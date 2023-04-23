
  #include<stdio.h>
  #include<string.h>
  int main(){


     char a[19];

     
     fgets(a,10,stdin);
     /* fgets take only the specified caharacter+null */

     gets(a);
     /* gets  take many character   */
     printf("%s",a);
     return 0;

   
  }