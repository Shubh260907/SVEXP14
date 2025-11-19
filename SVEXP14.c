#include <stdio.h>

int main() {


    int balance = 5000;
    int withdrawAmount;
    char choice;

    printf("--- Welcome to the ATM ---\n");


    do {

        printf("\nYour current balance is: ₹%d\n", balance);

        printf("Enter amount to withdraw: ");
        scanf("%d", &withdrawAmount);


        if (withdrawAmount < 0) {
            printf("Invalid amount. Please enter a positive number.\n");
        }
        else if (withdrawAmount > balance) {
            printf("Insufficient balance. Cannot withdraw ₹%d\n", withdrawAmount);
        }
        else {
            balance = balance - withdrawAmount;
            printf("Transaction successful. Deducting ₹%d\n", withdrawAmount);
            printf("Remaining balance: ₹%d\n", balance);
        }


        if (balance == 0) {
            printf("\nYour balance is now ₹0. You cannot make further withdrawals.\n");
            break;
        }

        printf("\nDo you want another transaction? (Y/N): ");


        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the ATM. Goodbye!\n");

    return 0;
}
