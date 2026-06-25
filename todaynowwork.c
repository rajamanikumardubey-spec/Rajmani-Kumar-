#include<stdio.h>
int main ()

{
  int matric[4][5] = {{1,2,3,4,5}, {6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
  int i;

  printf("please enter the number");

  for(int i=0; i<4; i++)
  {
    
    for(int x=0; x<5; x++)
    {
       printf("row%d","coloum%d", i, x);
        scanf("%d",&matric [i][x]);
    }

       
  }

    printf("input\n");

  for(int i=0; i<4; i++)
  {
    printf("matric = \n");
    for(int x=0; x<5; x++)
    {
       
        scanf("%d",&matric [i][x]);
        
    }
      
    printf("\n");


    return 0;
}