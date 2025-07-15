// 153 = (1 no ghan) + (5 no ghan) + (3 no ghan) = 153
#include<stdio.h>
int main(){

    int val=0;
    int digit=0;
    int sum=0;
    printf("enter number :");
    scanf("%d",&val);

    int temp=val;

    while(val>0){
        digit=val%10;
        sum=sum +(digit * digit *digit);
        val=val/10;
    }

    if(temp==sum){
        printf("%d is armstrong number...",sum);
    }
    else{
        printf("this is not armstrong number...");
    }

    return 0;
}