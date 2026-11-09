#include <stdio.h>

struct account {
    int accountNumber;
    float balance;
};

int main() {
    struct account a;

    int choice;
    float amount;

    a.accountNumber = 101;
    a.balance = 5000;

    printf("===== BANKING SYSTEM =====\n");

    do {
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Balance: %.2f\n", a.balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    a.balance += amount;
                    printf("Money deposited successfully!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= a.balance) {
                    a.balance -= amount;
                    printf("Money withdrawn successfully!\n");
                } else {
                    printf("Invalid amount or insufficient balance!\n");
                }
                break;

            case 4:
                printf("Thank you for using our bank!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
