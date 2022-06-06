#include<stdio.h>
#include<stdbool.h>
int main (){
    int year;
scanf("%d",&year);
bool isLeapYear = (year % 4 == 0);
if (isLeapYear){
    printf("Leap Year");
}
else{
    printf("Not Leap year");
}
return 0;
}