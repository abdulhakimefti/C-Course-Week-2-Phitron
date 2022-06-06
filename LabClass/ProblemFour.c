
// Problem 4
#include <stdio.h>
int main () {
    int bAh,bBc,bC;
    scanf("%d %d %d",&bAh,&bBc,&bC);
    int remainingWaterInBottleTwo = bC - (bAh-bBc);
    printf("%d\n",remainingWaterInBottleTwo);
}