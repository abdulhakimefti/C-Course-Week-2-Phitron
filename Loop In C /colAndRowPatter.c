#include <stdio.h>
int main()
{

    for (int row = 1; row <= 10; row++)
    {
        for (int col = 1; col <= 10; col++)
        {
            printf("%d\t", col * row);
        }
        printf("\n");
    }

    return 0;
}