#include<stdio.h>


int main(){
    
int e,f;
scanf("%d %d",&e,&f);
if(f != 0){
    if(e%f == 0){
        printf("%d is divisible by %d\n",e,f);
    }
    else{
        printf("%d is not divisible by %d\n",e,f);
    }
}
else {
    printf("%d cannot divide by 0\n",e);
}
return 0;
}
