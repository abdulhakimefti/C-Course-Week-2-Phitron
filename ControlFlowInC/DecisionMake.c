#include<stdio.h>

int main (){
    int marks;
    scanf("%d",&marks);
    if(marks >= 40){
        printf("You are passed\n");
    }
    else {
        printf("Your are failed\n");
    }
    return 0;
}