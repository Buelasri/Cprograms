#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct account {
    int accno;
    char name[100];
    float balance;
    struct account* next;
};

struct account* head = NULL;


struct account* createacountc(int accno, char name[],float balance) {
    struct account* newacc = (struct account*)malloc(sizeof(struct account));
    newacc->accno = accno;
    strcpy(newacc->name, name);
    newacc->balance = 0.0;
    newacc->next = NULL;
    return newacc;
}
void addaccount(int accno, char name[]) {
    struct acc* newacc = createacc(accno, name);
    newacc->next = head;
    head = newacc;
    printf("Account created successfully!\n");
}
struct acc* searchacc(int accno) {
    struct acc* temp = head;
    while (temp != NULL) {
        if (temp->accno == accno)
            return temp;
        temp = temp->next;
    }
    return NULL;
}
void deposit(int accno, float amount) {
    struct acc* acc = searchacc(accno);
    if (acc != NULL) {
        acc->balance += amount;
        printf("Deposited successfully! New balance: %.2f\n", acc->balance);
    } else {
        printf("Account not found.\n");
    }  
}

int main() {
    int choice, accno;
    float amount;
    char name[100];

    do {
        printf("\nATM SYSTEM\n");
        printf("1. Add Account\n");
        printf("2. Deposit\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter account number: ");
                scanf("%d", &accno);
                printf("Enter name: ");
                scanf("%s", name);
                addacc(accno, name);
                break;
            case 2:
                printf("Enter account number: ");
                scanf("%d", &accno);
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(accno, amount);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

