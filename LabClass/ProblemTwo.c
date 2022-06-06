// Problem 2
#include<stdio.h>
int main () {
    int t;
    scanf("%d",&t);
    for(int cs = 1;cs<=t;cs++){
        int normal_rev,advert_rev,advert_cost;
        scanf("%d %d %d",&normal_rev,&advert_rev,&advert_cost);
        int advertise_profit = advert_rev - advert_cost;
        if(normal_rev < advertise_profit){
            printf("advertise\n");
        }
        if(normal_rev == advertise_profit){
            printf("does not matter\n");

        }
        if(normal_rev > advertise_profit){
            printf("do not advertise\n");

        }
    }
}
