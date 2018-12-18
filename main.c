#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("________________________________\n welcome to airtel Siliza service\n_________________________________\n");
   printf("PRESS:\n\n1 for SILIZA airtime\n\n 2 for SILIZA express\n\n 3 for HELP \n\n 4 for Balance\n\n\ 5 buy for someone else\n\n\n");
    int selected;
   scanf("%d",&selected);
    switch(selected)
    {
    case 1:{ printf("PRESS:\n\n1 for k1\n\n2 for k2 \n\n3 for k3 \n\n4 for k5\n\n\n");
           int option2; scanf("%d",&option2);switch(option2)
           {case 1:printf("k1 transaction was successful please wait and check your balance by pressing *114#\n\n\n\n\n");
            break;
           case 2:printf("k2 transaction was successful please wait and check your balance by pressing *114#\n\n\n\n\n");
            break;
           case 3:printf("k3 transaction was successful please wait and check your balance by pressing *114#\n\n\n\n\n");
            break;
           case 4:printf("k4 transaction was successful please wait and check your balance by pressing *114#\n\n\n\n\n");
            break;
           case 5:printf("k5 transaction was successful please wait and check your balance by pressing *114#\n\n\n\n\n");
            break;
           default:printf("you do not qualify for this option\a\a\a\a");
             break;}

            }
    break;


    case 2:{ printf("PRESS:\n\n1 for k1 express \n\n2 for k2 express \n\n3 for k3 express \n\n4 for k5\ express n\n\n");
           int option2; scanf("%d",&option2);switch(option2)
           {case 1:printf("k1 express transaction was successful please\n wait and check your balance by pressing *114# \n\n\n\n\n");
            break;
           case 2:printf("k2  express transaction was successful please wait and check your balance by pressing *114# \n\n\n\n\n");
            break;
           case 3:printf("k3 express transaction was successful please wait and check your balance by pressing *114# \n\n\n\n\n");
            break;
           case 4:printf("k4 express   transaction was successful please wait and check your balance by pressing *114# \n\n\n\n\n");
            break;
           case 5:printf("k5 express  transaction was successful please wait and check your balance by pressing *114#\n\n\n\n\n");
            break;
           default:printf("you do not qualify for this option yet\n\n\n\n\n");
             break;}

            }
    break;
    case 3:printf("please call 111 for help \n\n\n\n\n");
    break;

    case 4: printf("you do not have any active credit line from siliza \n\n\n\n\n");
     break;
    default:printf("please go through to the airtel shops at any of our location dedicated shops for more help\n\n\n\n\n");
     break;

    case 5: printf("this service is currently not available for your number");
      break;

      main(); }


}
