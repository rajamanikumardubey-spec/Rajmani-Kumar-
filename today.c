#include<stdio.h>
int main ()
{
    int i;
    int from;
    int end;

    printf("Please enter starting number:\n");
    scanf("%d",&from);

    printf("Please enter end number:\n");
    scanf("%d",&end);

    printf("Even Number between from %d to %d : \n", from, end);
    for(i=from; i<=end; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);

        }
    }


    return 0;
}