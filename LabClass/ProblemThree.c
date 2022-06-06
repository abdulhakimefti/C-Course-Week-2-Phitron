// Problem 3
#include <stdio.h>
int main () {
    int limit,months;
    scanf("%d %d",&limit,&months);
    int baki =0;
    for(int cs = 1;cs<=months;cs++){
        int used;
        scanf("%d",&used);
        int monthly_limit = limit + baki;
        baki = monthly_limit - used;
    }
    int finally_limit = baki + limit;
    printf("%d",finally_limit);
}
