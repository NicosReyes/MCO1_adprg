/*
********************
Last names: Reyes, Ching
Language: C
Paradigm(s):
********************
*/

#include <stdio.h>
#include <string.h>

int mainMenu();
void registerAcc(char *accName);
void deposit(char *accName);
void withdraw(char *accName);
void currEx();
void recordCurrEx();
void showInterest();

typedef char string50[51];

int main(){
    string50 accName = "Dela Cruz, Juan";

    while (1) {

        switch (mainMenu()) {
            case 1:
                registerAcc(accName);
                break;

            case 2:
                deposit(accName);
                break;

            case 3:
                withdraw(accName);
                break;

            case 4:
                currEx();
                break;

            case 5:
                recordCurrEx();
                break;

            case 6:
                showInterest();
                break;

            default:
                printf("Invalid Choice!\n\n");
        }

    }
}

int mainMenu(){
    int choice;

    printf(
    "Select Transaction:\n"
    "[1] Register Account Name\n"
    "[2] Deposit Amount\n"
    "[3] Withdraw Amount\n"
    "[4] Currency Exchange\n"
    "[5] Record Exchange Rates\n"
    "[6] Show Interest Amount\n\n"
    );

    printf("Choice: ");
    scanf("%d", &choice);
    printf("\n\n***\nChoice: %d\n\n", choice);

    return choice;
}

void registerAcc(char *accName){
    printf(
        "Register Account Name\n\n"
        "Account Name: "
    );

    int c;
    while ((c = getchar()) != '\n' && c != EOF); //buffer clearing

    fgets(accName, sizeof(string50), stdin);

    accName[strcspn(accName, "\n")] = '\0'; //fgets cleaning
    
    printf("\n\n***\nAccount Name: %s\n\n", accName);
}

void deposit(char *accName){
    float deposit;

    printf(
        "Deposit Amount\n"
        "Account Name: %s\n"
        "Current Balance: 1000.00\n"
        "Currency: PHP\n\n",
        accName
    );

    printf("Deposit Amount: ");
    scanf("%f", &deposit);
    printf(
        "\n\n***\n"
        "Account Name: %s\n"
        "Deposit Amount: %f\n\n", 
        accName,
        deposit
    );
}

void withdraw(char *accName){
        float withdraw;

    printf(
        "Withdraw Amount\n"
        "Account Name: %s\n"
        "Current Balance: 1000.00\n"
        "Currency: PHP\n\n",
        accName
    );

    printf("Withdraw Amount: ");
    scanf("%f", &withdraw);
    printf(
        "\n\n***\n"
        "Account Name: %s\n"
        "Withdraw Amount: %f\n\n", 
        accName,
        withdraw
    );
}

void currEx(){
    printf(
        "Foreign Currency Exchange\n"
        "Source Amount (PHP): 1000.00\n\n"
        "Exchanged Currency\n"
        "[1] Philippine Peso (PHP) = 1000.00\n"
        "[2] United States Dollar (USD) = 62000.00\n"
        "[3] Japanese Yen (JPY) = 400.00\n"
        "[4] British Pound Sterling (GBP) = 84000.00\n"
        "[5] Euro (EUR) = 72000.00\n"
        "[6] Chinese Yuan Renminbi (CNY) = 9000.00\n\n"
        "***\n"
        "Source Currency = Philippine Peso (PHP)\n"
        "Source Amount (PHP) = 1000.00\n\n"
    );
}

void recordCurrEx(){
    int curr;
    float rate;

    printf(
        "Record Exchang Rate\n"
        "[1] Philippine Peso (PHP)\n"
        "[2] United States Dollar (USD)\n"
        "[3] Japanese Yen (JPY)\n"
        "[4] British Pound Sterling (GBP)\n"
        "[5] Euro (EUR)\n"
        "[6] Chinese Yuan Renminbi (CNY)\n\n"
    );

    printf("Select Foreign Currency: ");
    scanf("%d", &curr);
    printf("\nExchange Rate: ");
    scanf("%f", &rate);

    printf(
        "\n\n***\n"
        "Select Foreign Currency: %d\n"
        "Exchange Rate: %f\n\n", 
        curr,
        rate
    );
}

void showInterest(){
    printf("WIP\n\n");
}