#include <stdio.h>

int main()
{
    
    // Problem 2
    int n;
    scanf("%d",&n);
    printf("Is %d a Even or Odd Number\n",n);
    if((n%2==0)&&(n!=0)){
        printf("Answer : Even\n");
    }
    else{
       if(n==0){
           printf("Answer : Undefined\n");
       }
       else{
           printf("Answer : Odd\n");
       }
    }

}