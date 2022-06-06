#include<stdio.h>
int main() {
    //1
    for(int i=1;i<=5;i++){
        printf("Hello World\n");
    }
    //2
    for(int i=1,j=20; i<=j;i++,j--){
        printf("%d %d\n",i,j);
    }
    //2
        int n,sum =0;
    scanf("%d",&n);
    for(int k =1;k<=n;k++){
             printf("%d\n",k);
        sum+=k;
        printf("&d\n",sum);

    }
    printf("%d\n",sum);
}