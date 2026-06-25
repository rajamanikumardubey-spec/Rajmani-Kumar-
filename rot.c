#include<stdio.h>
int main()
{
  int num[10]={1,2,3,4,5,6,7,8,9,10};
  int i;

  printf("Even numbers: \n");
  for(i=0; i<10; i++)
  {
    if(num[i] % 2 == 0)
    {
      printf("%d\n",num[i]);
    }
  }

}