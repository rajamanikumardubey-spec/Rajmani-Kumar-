#include <stdio.h>

int main()

{
    char subject[5][20]; 
    int marks[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter subject%d: i + 1");
        scanf("%s", subject[i]);

        printf("Enter marks for %s: ", subject[i]);
        scanf("%d", &marks[i]);

        total += marks[i];
    }



    printf("\nTotal Marks = %d\n", total);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char subject[3];
//     int marks[3];
//     int total = 0;
    

//     printf("Please enter first subjects:\n");
//     scanf("%s",&subject[0]);

//     printf("please enter the marks;\n");
//     scanf("%d",&marks);

//     printf("Please enter second subjects:\n");
//     scanf("%s",&subject);

//     printf("please enter the marks;\n");
//     scanf("%d",&marks);

//     printf("Please enter third subjects:\n");
//     scanf("%s",&subject);

//     printf("please enter the marks;\n");
//     scanf("%d",&marks);

    
//     for (int i = 0; i < 3; i++)
//     {
//         // printf("Enter marks for %s: ", subject);
//         // scanf("%d", &marks);

//         total = total + marks[i];
//     }

//     printf("\nSubject-wise Marks:\n");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("subject%s",subject[i]);
//         printf("marks%d",marks[i]);
//     }
     
//     printf("\nTotal Marks = %d\n", total);

//     return 0;
// }