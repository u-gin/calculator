#include <stdio.h>

int main()
{
    /* code */
    char operator;
    double firstNumber, secondNumber;
    double result;

    printf("Choose an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter your first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter second number: ");
    scanf("%lf", &secondNumber);

    switch (operator)
    {
    case '+':

        printf("%.2lf + %.2lf = %.2lf", firstNumber, secondNumber, firstNumber + secondNumber);
        break;

    case '-':

        printf("%.2lf - %.2lf = %.2lf", firstNumber, secondNumber, firstNumber - secondNumber);
        break;

    case '*':

        printf("%.2lf * %.2lf = %.2lf", firstNumber, secondNumber, firstNumber * secondNumber);
        break;

    case '/':
        if (secondNumber == 0)
        {
            printf("This operation cannot be completed");
            
        }
        else {

            printf("%.2lf / %.2lf = %.2lf", firstNumber, secondNumber, firstNumber / secondNumber);
        }
        break;

    default:
        break;
    }

    return 0;
}
