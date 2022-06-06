
// problem 8
#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    if(sum >= 10){
        printf("error\n");
    }
    else{
        printf("%d\n",sum);
    }
}