#include<stdio.h>
int main()
   
{ 
    char playername[5][50];
    char countryname[5][50];
    int id [5];
    int i;

    for ( i=0; i<5; i++)
    {
        printf(" entre %d player ditels\n", i + 1);

        printf(" enter %d playername\n", i +1);
        scanf(" %s", playername [i]);

        printf(" enter %d countryname\n", i +1);
        scanf(" %s", countryname [i]);

        printf(" entre %d id\n", i + 1);
        scanf(" %d", &id [i]);

        
    }
 
    printf("\nplayer all data");

    for(i=0; i<5; i++)
    {
       printf("\n%d player name = %s", i + 1, playername [i]);
       printf("\n%d country name = %s",i + 1, countryname [i]);
       printf("\n%d id = %d",i + 1, id [i]);
    }


    return 0;
}
