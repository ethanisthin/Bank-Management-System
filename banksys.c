#include <stdio.h>
#include <stdlib.h>

int pin; 
void login(){
    while (1){
        printf("\nEnter pin: ");
        scanf("%d", &pin);

        if (pin == 3057){
            printf("You have succesfully logged in.");
            break;
        }
        printf("Invalid pin, please try again.");
    }
}

int main(){

    int option; 
    double balance = 0;
    double deposit = 0; 
    double withdraw = 0;
    login();

do {
    printf("\n---Bank System---\n");
    printf("\t1. Balance Check\n");
    printf("\t2. Deposit Amount\n");
    printf("\t3. Withdraw Amount\n");
    printf("\t4. Exit\n");

    printf("Enter an option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("You have chosen to check balance.\n");
        printf("\nYour balance is:%lf CAD", balance);
        break;
    
    case 2:
        printf("You have chosen to deposit\n");
        printf("\nPlease enter deposit amount: ");
        scanf("%lf", &deposit);
        balance += deposit; 
        printf("You have succesfully deposited: %lf CAD. \nYour balance is now %lf CAD.", deposit, balance);
        break;

    case 3:
        printf("You have chosen to withdraw\n");
        printf("\nPlease enter withdrawal amount: ");
        scanf("%lf", &withdraw);
        if (balance < withdraw){
            printf("Sorry, you have insufficient funds.");
        }

        else{
            balance -= withdraw;
            printf("You have succesfully withdrawn %lf CAD. \nYou balance is now %lf CAD.", withdraw, balance);
        }
        break;

    case 4:
        printf("You have chosen to exit.\nThank you for banking with us.");
        exit(0);
        break;

    default:
        printf("Please select one of the options.");
        break;
    }
}while (1); 

return 0;
}