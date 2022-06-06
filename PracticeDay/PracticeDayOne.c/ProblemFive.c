#include <stdio.h>

int main()
{
    
    

    // Problem 6
    int n;
    scanf("%d",&n);
    if(n > 0){
        printf("1");
    }
    else if (n==0){
        printf("0");
    }
    else if(n < 0){
        printf("-1");
    }

    int a, b;
    scanf("%d %d", &a, &b);
        if (a > b)
        {
            printf("a is bigger\n");
            printf("b is smaller\n");
        }
        else
        {
            printf("b is bigger\n");
            printf("a is smaller\n");
        }
}