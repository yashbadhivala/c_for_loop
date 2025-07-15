#include<stdio.h>

int main(){

    int val=0;
    int fact=1;
    printf("enter number : ");
    scanf("%d",&val);

    for(int i=val;i>=1;i--){
        fact=fact*i;
    }

    printf("factorial is %d",fact);

    return 0;
}