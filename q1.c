#include <stdio.h>

// User Defined Functions
int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int divi(int x, int y) { return x / y; }
int mod(int x, int y) { return x % y; }

int main() {
    int choice, a, b;

    // Loop will run 5 times (you can change it)
    for(int i = 1; i <= 5; i++) {
        printf("\n----- MENU -----\n");
        printf("0. Exit\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("----------------\n");

        printf("Enter your choice (0-5): ");
        scanf("%d", &choice);

        if(choice == 0) {
            printf("Exiting program... Goodbye!\n");
            break;  // exit the loop early if user chooses 6
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch(choice) {
            case 1: printf("Result = %d\n", add(a, b)); break;
            case 2: printf("Result = %d\n", sub(a, b)); break;
            case 3: printf("Result = %d\n", mul(a, b)); break;
            case 4: printf("Result = %d\n", divi(a, b)); break;
            case 5: printf("Result = %d\n", mod(a, b)); break;
            default: printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
