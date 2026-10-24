#include <stdio.h>

int main() {
    int pin, choice;
    int deposit, balance = 1000, draw;


     printf("\n===== ATM MACHINE =====\n");
    printf("\nEnter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
         printf("\n!! Pin verified successfully !!\n\n");
    }
   else  {
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }

    do {
        // ATM Main Menu
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Cash\n");
        printf("4. Exit\n");
        printf("Enter your option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Check Balance
                printf("\n**************************************************\nCurrent Balance: $%d\n**************************************************\n", balance);
                break;

            case 2: // Deposit Money
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("\n**************************************************\n   !! Deposit successful !!\n   Updated Balance: $%d\n**************************************************\n", balance);
                } else {
                    printf("\n!! Invalid amount Entered !!\n\n");
                }
                break;

            case 3: // Withdraw Cash
                printf("Enter amount to withdraw: ");
                scanf("%d", &draw);
                if (draw <= 0) {
                     printf("\n!! Invalid withdrawal amount !!\n\n");
                
                } else if (draw > balance) {
                    printf("\n!! Transaction rejected. Insufficient balance !!\n\n");
                   
                } else {
                    balance -= draw;
                    printf("\n**************************************************\n   !! Withdrawal successful !!\n   Updated Balance: $%d\n**************************************************\n", balance);
                    
                }
                break;

            case 4: // Exit
               printf("\n**************************************************\n\n      .....! Thank you Visit Again ! .....\n\n\n");
                break;

            default: // Invalid menu option
                printf("\n**************************************************\n!! Invalid option selection !! Please try again.\n**************************************************\n");
                break;
        }

    } while (choice != 4);

    return 0;
}