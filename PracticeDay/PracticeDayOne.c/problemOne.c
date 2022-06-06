#include <stdio.h>

int main()
{
    // Problem 1
    int A = 5, B = 6, C = 10;
    if (A < 5)
    {
        printf("a no is true\n");
    }
    else
    {
        printf("a no is false\n");
    }
    if (A + B == 11)
    {
        printf("b no is true\n");
    }
    else
    {
        printf("b no is false\n");
    }
    if (A * C % 5 == 0)
    {
        printf("c no is true\n");
    }
    else
    {
        printf("c no is false\n");
    }
    if (A >= B)
    {
        printf("d no is true\n");
    }
    else
    {
        printf("d no is false\n");
    }
    if (!(A > B))
    {
        printf("e no is true\n");
    }
    else
    {
        printf("e no is false\n");
    }
    if ((A < B) && (B < C))
    {
        printf("f no is true\n");
    }
    else
    {
        printf("f no is false\n");
    }
    if ((A < B) || (B < C))
    {
        printf("g no is true\n");
    }
    else
    {
        printf("g no is false\n");
    }
    if (!(A%5==0 && B%5==0))
    {
        printf("j no is true\n");
    }
    else
    {
        printf("j no is false\n");
    }

}