//Simple calculator using if–else
#include <stdio.h>
int main()
{
    int num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("Addition = %d", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Subtraction = %d", num1 - num2);
    }
    else if (op == '*')
    {
        printf("Multiplication = %d", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("Division is not possible");
        }
        else
        {
            printf("Division = %d", num1 / num2);
        }
    }
    else if (op == '%')
    {
        if (num2 == 0)
        {
            printf("Modulo division is not possible");
        }
        else
        {
            printf("Modulo = %d", num1 % num2);
        }
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
}