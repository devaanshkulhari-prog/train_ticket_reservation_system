#include<stdio.h>

int main(){
    int pnr;
    float total_amount_1AC;
    float total_amount_2AC;
    float total_amount_3AC;
    float total_amount_SLEEPER;
    float wallet_total=100000.00;
    int ticket_count;
    float ticket_amount;
    int age;
    float total_amount;
    float left_wallet;
    int ticket_count_for_coach;

    int x; // x for choosing which page you want to open
    printf("enter value of of x to open a page\n");
    scanf("%d",&x);

    switch(x){
        case 1 :
        printf("BOOK TICKET\n");
        
        printf("enter the value of tickets you want to book\n");
        scanf("%d",&ticket_count);

        for( int i=1 ; i<=ticket_count ; i++){
            printf(" TICKET NUMBER %d \n" , i);

            int y; // y for selecting which coach you want to book a ticket in
            printf("select a number for book a coach\n");
            scanf("%d",&y);

            switch(y){
                case 1 :
                ticket_amount=2000.00;
                printf("COACH 1 AC \n");

                printf("enter value of tickets you want to book for 1AC\n");
                scanf("%d",&ticket_count_for_coach);

                for(int j=1;j<=ticket_count_for_coach;j++){ 
                printf("enter your age \n");
                scanf("%d",&age);

                if(age>60){
                    printf("you are a senior citizen so you are getting 50 percent discount\n");
                    total_amount_1AC=ticket_amount * (50.00/100.00);
                    printf("final amount for your ticket is %f\n",total_amount_1AC);
                }
                else{
                    printf("final amount for your ticket is %f\n",ticket_amount);
                }
                if(age<5){
                    printf("hey buddy you are a kid so for you it is free\n");
                    printf("final amount for your ticket is 0.00\n");
                }
            }
            break;
                
            case 2 :
                   ticket_amount=1200.00;
                printf("COACH 2 AC\n ");

                printf("enter value of tickets you want to book for 2AC\n");
                scanf("%d",&ticket_count_for_coach);

                for(int j=1;j<=ticket_count_for_coach;j++){ 
                printf("enter your age\n ");
                scanf("%d",&age);

                if(age>60){
                    printf("you are a senior citizen so you are getting 50 percent discount\n");
                    total_amount_1AC=ticket_amount * (50.00/100.00);
                    printf("final amount for your ticket is %f\n",total_amount_1AC);
                }
                else{
                    printf("final amount for your ticket is %f\n",ticket_amount);
                }
                if(age<5){
                    printf("hey buddy you are a kid so for you it is free\n");
                    printf("final amount for your ticket is 0.00\n");
                }
            }
            break;

            case 3 :

            ticket_amount=800.00;
                printf("COACH 3 AC\n ");

                printf("enter value of tickets you want to book for 3AC\n");
                scanf("%d",&ticket_count_for_coach);

                for(int j=1;j<=ticket_count_for_coach;j++){ 
                printf("enter your age \n");
                scanf("%d",&age);

                if(age>60){
                    printf("you are a senior citizen so you are getting 50 percent discount\n");
                    total_amount_3AC=ticket_amount * (50.00/100.00);
                    printf("final amount for your ticket is %f\n",total_amount_3AC);
                }
                else{
                    printf("final amount for your ticket is %f\n",ticket_amount);
                }
                if(age<5){
                    printf("hey buddy you are a kid so for you it is free\n");
                    printf("final amount for your ticket is 0.00\n");
                }
            }
            break;

            case 4 :
            ticket_amount=300.00;
                printf("COACH SLEEPER \n");

                printf("enter value of tickets you want to book for SLEEPER\n");
                scanf("%d",&ticket_count_for_coach);

                for(int j=1;j<=ticket_count_for_coach;j++){ 
                printf("enter your age\n ");
                scanf("%d",&age);

                if(age>60){
                    printf("you are a senior citizen so you are getting 50 percent discount\n");
                    total_amount_SLEEPER=ticket_amount * (50.00/100.00);
                    printf("final amount for your ticket is %f\n",total_amount_SLEEPER);
                }
                else{
                    printf("final amount for your ticket is %f\n",ticket_amount);
                }
                if(age<5){
                    printf("hey buddy you are a kid so for you it is free\n");
                    printf("final amount for your ticket is 0.00\n");
                }
            }
            break;
            }

            total_amount=total_amount_1AC + total_amount_2AC + total_amount_3AC + total_amount_SLEEPER;
            printf("final total amount to pay is %f \n",total_amount);

           pnr = 1098787*ticket_count;
           printf("the pnr for your booking is %d",pnr);

        }
                 

        case 2 :
        printf("WALLET");
        printf("total amount in wallet is %f\n",wallet_total);
        left_wallet=wallet_total-total_amount;
        printf("after payment left amount in your wallet is %f\n",left_wallet);

                break;

        case 3 :
        printf(" booking history ");
        break;

        case 4 : 
        printf(" exit the website ");
        break;

        default :
        printf(" !!please enter a valid value of x 1-4!! ");
        break;
    }
    

    return 0;
}