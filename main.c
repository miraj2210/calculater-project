#include <stdio.h>

int main()
{

    int choice, a, b;
    do
    {
        printf("\npress 1 for +");
        printf("\npress 2 for -");
        printf("\npress 3 for *");
        printf("\npress 4 for /");
        printf("\npress 5 for %");
        printf("\npress 0 for exit");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 5)
        {
            printf(" enter the first number:");
            scanf("%d", &a);

            printf("enter the second number:");
            scanf("%d", &b);
        }
        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d", a, b, a + b);
            break;

        case 2:
            printf("Subtraction of %d and %d is %d", a, b, a - b);
            break;

        case 3:
            printf("Multiplication of %d and %d is %d", a, b, a * b);
            break;

        case 4:
            printf("Division of %d and %d is %d", a, b, a / b);
            break;

        case 5:
            printf(" modulus of %d and %d is %d ", a, b, a % b);
            break;

        case 0:
            printf(" program exited.");
            break;

        default:
            printf("Invalid choice .");
            break;
        }
    } while (choice != 0);

    return 0;
}