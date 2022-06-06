// problem 3

#include<stdio.h>
int main () {
    int numWR;
    scanf("%d",&numWR);
    int negTemp =0;
    for(int i = 1;i<=numWR;i++){
        int weatherReport;
        scanf("%d",&weatherReport);
        if(weatherReport < 0){
            negTemp+=1;
        }
    }
    printf("%d\n",negTemp);
}