#include <stdio.h>

int main()
{
    
    

    // Problem 5
    int mark;
    scanf("%d", &mark);
    if ((mark <= 100) && (mark >= 80))
    {
        printf("A+");
    }
    else if ((mark <= 79) && (mark >= 70))
    {
        printf("A");
    }
    else if ((mark <= 69) && (mark >= 60))
    {
        printf("B");
    }
    else if ((mark <= 59) && (mark >= 50))
    {
        printf("C");
    }
    else if ((mark <= 49) && (mark >= 40))
    {
        printf("D");
    }
    else if ((mark <= 39) && (mark >= 0))
    {
        printf("F");
    }

    