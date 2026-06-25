#include<stdio.h>
int main()
{
   char studentname[1][50];
   char fulladdress[1][50];
   char email[1][30];
   int age;
  
   printf("please enter the  studentname:\n");
   scanf("%s",&studentname);

   printf("please enter the   address:\n");
   scanf("%s",&fulladdress);
 
   printf("please enter the email:\n");
   scanf("%s",&email);

   printf("please enter the age:\n");
   scanf("%d",&age);

   printf("\nstudent name: %s", studentname);
   printf("\naddress: %s", fulladdress);
   printf("\nemail: %s", email);
   printf("\nage: %d", age);


  return 0;
}