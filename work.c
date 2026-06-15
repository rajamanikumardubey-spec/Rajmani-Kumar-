#include<stdio.h>
int main ()
{ 
  int num [10];
  int i, c = 0;
  
      for ( i = 0; i <= 20; i += 2) 
      {
         num [c] = i;
         c++;

      }

     printf("even numbers between 1 to 20 are:\n");


     for(i = 0; i<c; i++)
     {
        printf("%d", num [i]);
     }


    return 0;
}