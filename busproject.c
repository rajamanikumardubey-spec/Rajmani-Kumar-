#include <stdio.h>

int main()
{
    char username [50];
    char userpasword [50];
    char userloginname [50];
    char userloginpassword [50];

    char busname[20] = "rajdut";
    int busNumber = 101;
    int seatnumber = 0;
    int booked = 0;
    char source[50];
    char destination[50];
    int fare = 450;

    int seatSelection;
    int ticketBooking;
    int ticketConfirmation;
    int ticketCancellation;
    int ticketModification;
    int fareCalculation;
    int bookingReceipt;
    int choice;


     while (1)
     {
      printf("1. user rejistration\n");
      printf("2. userlogin\n");
      printf("3. View Bus Details\n");
      printf("4. Book Ticket\n");
      printf("5. Fare Calculation\n");
      printf("6. Booking Receipt\n");
      printf("7. Cancel Ticket\n");
      printf("8. Modify Ticket\n");
      printf("9. Exit\n");

      printf("Enter Your Choice: ");
      scanf("%d", &choice);



     switch (choice)

       {
          case 1:

          printf("\n=====user rejistration=====\n");

          printf("enter user name");
          scanf(" %[^\n]s",username);

          printf("enter user pasword");
          scanf("%s",userpasword);

          printf("\nRegistration Successful!\n");


      break;

      case 2:
                

          printf("\n=====user login=====\n");

          printf("enter userlogin name");
          scanf(" %[^\n]s",userloginname);

          printf("enter userlogin pasword");
          scanf("%s",userloginpassword);

          printf("\nlogin  Successful!\n");


      break; 

      case 3:
            printf("\n===== BUS DETAILS =====\n");
            printf("Bus Name    : %s\n", busname);
            printf("Bus Number  : %d\n", busNumber);
            printf("Fare        : %d\n", fare);

       break;


        case 4:
            if (booked == 1)
            {
                printf("Ticket already booked.\n");
            }
            else
            {
                printf("\n===== BOOK TICKET =====\n");

                printf("Enter Source: ");
                scanf("%s", source);

                printf("Enter Destination: ");
                scanf("%s", destination);

                printf("Enter Seat Number (1-50): ");
                scanf("%d", &seatnumber);

                booked = 1;

                printf("Ticket Booked Successfully.\n");
            }
            break;

        case 5:
        if (booked)
            {
                printf("\n===== FARE =====\n");
                printf("Total Fare = %d\n", fare);
            }
            else
            {
                printf("No Ticket Booked.\n");
            }
            break;


        case 6:
            if (booked)
            {
                printf("\n========= BOOKING RECEIPT =========\n");
                printf("Passenger Name : %s\n", username);
                printf("Bus Name       : %s\n", busname);
                printf("Bus Number     : %d\n", busNumber);
                printf("Source         : %s\n", source);
                printf("Destination    : %s\n", destination);
                printf("Seat Number    : %d\n", seatnumber);
                printf("Fare           : %d\n", fare);
                printf("===================================\n");

            }
                else
                   {

                     printf("No Ticket Booked.\n");

                   }
            break;

            case 7:
            if (booked)
            {
                booked = 0;
                seatnumber = 0;
                printf("Ticket Cancelled Successfully.\n");
            }
            else
               {
                printf("No Ticket Found.\n");
               }
            break;


            case 8:
            if (booked)
            {
                printf("Current Seat: %d\n", seatnumber);
                printf("Enter New Seat Number: ");
                scanf("%d", &seatnumber);

                printf("Seat Modified Successfully.\n");
            }
            else
              {
                printf("No Ticket Booked.\n");
              }

         break; 

     
      
      case 9:
         
           printf("exit\n");
           return 0;

        break;       

         default:
            printf("Invalid Choice.\n");
        }

    }
     
    

    return 0;
}
