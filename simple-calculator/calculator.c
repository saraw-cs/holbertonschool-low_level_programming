#include <stdio.h>

int main(void)
{
    int choice = 0;
    double a, b;

    do
    {
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
            return (1);

        if (choice == 1)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);
            printf("Result: %g\n", a + b);
        }
        else if (choice == 2)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);
            printf("Result: %g\n", a - b);
        }
        else if (choice == 3)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);
            printf("Result: %g\n", a * b);
        }
        else if (choice == 4)
        {
            printf("A: ");
            scanf("%lf", &a);
            printf("B: ");
            scanf("%lf", &b);

            if (b == 0)
                printf("Error: division by zero\n");
            else
                printf("Result: %g\n", a / b);
        }
        else if (choice < 0 || choice > 4)
        {
            printf("Invalid choice\n");
        }

    } while (choice != 0);

    printf("Bye!\n");

    return (0);
}

