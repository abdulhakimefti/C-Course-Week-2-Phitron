#include <stdio.h>

int main()
{
    
    

    // Problem 3

    int a, op, b;
    scanf("%d %c %d", &a, &op, &b);
    printf("Input is \t %d %c %d\n", a, op, b);

    switch (op)
    {
    case '+':
        printf("Output is %d", a + b);
        break;
    case '-':
        printf("Output is %d", a - b);
        break;
    case '*':
        printf("Output is %d", a * b);
        break;
    case '/':
        printf("Output is %d", a / b);
        break;
    case '%':
        if (b == 0)
        {
            printf("Cannot devided by 0");
        }
        else
        {
            printf("Output is %d", a % b);
        }

        break;
    default:
        printf("Operator type is unknown");
        break;
    }
}