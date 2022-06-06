// problem 1

#include<stdio.h>
int main () {
    char alphabet;
    scanf("%c",&alphabet);
    if((alphabet=='a')||(alphabet=='e')||(alphabet=='i')||(alphabet=='o')||(alphabet=='u')){
        printf("vowel\n");
    }
    else{
        printf("consonant\n");
    }
}