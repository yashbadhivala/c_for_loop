#include<stdio.h>

int main(){

    int val=0;
    int digit=0;

    printf("enter number :");
    scanf("%d",&val);

    int first=0,last=0;
    last=val%10;

    while(val>0){
        first=val%10;
       
        val=val/10;
    }

    printf("first digit is : %d\n",first);
    printf("last digit is : %d",last);
    printf("sum of first and last digit is : %d",first+last);

    return 0;
}