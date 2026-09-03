#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

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

        printf("enter your choice:");
        scanf("%d", &choice);
        if (choice == 0)
        {

            printf("program exited.");
        }
        {
            printf(" enter the first number:");
            scanf("%d", &a);

            printf("enter the second number:");
            scanf("%d", &b);
        }
        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d", a, b, add(a, b));
            break;

        case 2:
            printf("Subtraction of %d and %d is %d", a, b, sub(a, b));
            break;

        case 3:
            printf("Multiplication of %d and %d is %d", a, b, mul(a, b));
            break;

        case 4:
        if(b>a){
            printf("Error: Second number is greater than the first number.");
        }
        else{
            printf("Division of %d and %d is %d", a, b, div(a, b));
        }
            break;

        case 5:
            printf(" modulus of %d and %d is %d ", a, b, mod(a, b));
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