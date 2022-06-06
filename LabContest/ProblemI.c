
// problem 9
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int plan_a, plan_b, plan_c;
    plan_a = a + b;
    plan_b = b + c;
    plan_c = a + c;
    if ((plan_a <= plan_b) && (plan_a <= plan_c))
    {
        printf("%d", plan_a);
    }
    else if ((plan_b <= plan_a) && (plan_b <= plan_c))
    {
        printf("%d\n", plan_b);
    }
    else if((plan_c<=plan_a)&&(plan_c<=plan_b)){
        printf("%d\n", plan_c);
    }
}