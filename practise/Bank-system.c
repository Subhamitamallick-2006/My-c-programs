#include <stdio.h>

int main() {
    int choice;
    double balance = 5000.0; 
    double amount;

    while(1) {
        printf("\nBANK SYSTEM\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice==1) {
            printf("Your balance is: $%.2f\n", balance);
        } 
        else if (choice==2) {
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);
            balance = balance + amount;
            printf("Deposited successfully!\n");
        } 
        else if (choice==3) {
            printf("Enter withdraw amount: ");
            scanf("%lf", &amount);
            if (amount > balance) {
                printf("Error: Not enough money!\n");
            } else {
                balance = balance - amount;
                printf("Withdraw successful!\n");
            }
        } 
        else if (choice==4) {
            printf("Thank you! Goodbye.\n");
            break; 
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}