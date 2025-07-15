#include<stdio.h>
int main(){

    int val=0;
    int digit=0;
    int rev=0;
    printf("enter number :");
    scanf("%d",&val);

    int temp=val;

    while(val>0){
        digit=val%10;
        rev=(rev*10)+digit;
        val=val/10;
    }

    printf("%d's reverse is %d",temp,rev);

    return 0;
}