#include<stdio.h>
#include<stdbool.h>

int main(){
    

int num1,num2;
char sign;
scanf("%d %c %d",&num1,&sign,&num2);
switch (sign) {
case '+' :
    printf("%d",num1+num2);
    break;
case '-' :
      printf("%d",num1-num2);
    break;
case '*':
      printf("%d",num1*num2);
    break;
case '/':
      printf("%d",num1/num2);
    break;
default:
    printf("Unknown operator\n");
    break;
    }
    return 0;
}