#include<stdio.h>
#include<math.h>

void printMenu();
void displayOperation(int);
double division(double, double);
double modulus(int, int);

int main() {
    int choice;
    double first, second, result;
    while (1){
        printMenu();
        scanf("%d", &choice);
        if (choice == 7){
            break;
        }
        if (choice > 7 || choice < 1)
        {
            fprintf(stderr, "Invalid Choice!\nChoose Again.");
            continue;
        }

        displayOperation(choice);
        
        printf("\nEnter first number : ");
        scanf("%lf", &first);
        printf("\nEnter second number : ");
        scanf("%lf", &second);
        switch (choice)
        {
        case 1: result = first + second;
            break;
        case 2: result = first - second;
            break;
        case 3: result = first * second;
            break;
        case 4: result = division(first, second);
            break;
        case 5: result = modulus(first, second);
            break;
        case 6: result = pow(first, second);
            break;
        }
        if (!isnan(result))
        {
            printf("\nResult of your operation is %.2f", result);
        }
        
        
        
        
    }
}

void printMenu() {
    printf("\n\n----------------------------------------------");
    printf("\n\n\nWelcome to the Simple Calculator!");
    printf("\nChoose one of the following operaitons.");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nEnter your choice: ");
}


double division(double a, double b) {
    if (b == 0)
    {
        fprintf(stderr, "\ninvalid inputs for division");
        return NAN;
    } else {
        return a/b;
    }
 }


 double modulus(int a, int b) {
    if (b == 0)
    {
        fprintf(stderr, "\ninvalid inputs for finding remainder.");
        return NAN;
    } else {
        return a%b;
    }
}


void displayOperation(int choice) {
    switch (choice)
        {
        case 1: printf("\nYou Chose Addition.\n");
            break;
        case 2: printf("\nYou Chose Subtraction.\n");
            break;
        case 3: printf("\nYou Chose to Multiply.\n");
            break;
        case 4: printf("\nYou Chose to Divide.\n");
            break;
        case 5: printf("\nYou Chose to find Remainder.\n");
            break;
        case 6: printf("\nYou Chose to solve Exponents.\n");
            break;
        }
}

